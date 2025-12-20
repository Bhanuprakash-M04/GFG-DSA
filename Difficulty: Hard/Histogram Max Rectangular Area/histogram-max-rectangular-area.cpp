class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
        // optimizing getting pas and nse
        //arr[i]*(nse-pse-1);
        int n=arr.size();
        stack<int>st;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                int ele=arr[st.top()];
                st.pop();
                int pse=(st.empty()) ? -1 :st.top();
                int nse=i;
                int sum=ele*(nse-pse-1);
                maxi=max(maxi,sum);
            }
            st.push(i);
        }
        while(!st.empty()){
            int ele=arr[st.top()];
            st.pop();
            int pse=(st.empty()) ? -1 :st.top();
            int nse=n;
            int sum=ele*(nse-pse-1);
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};
