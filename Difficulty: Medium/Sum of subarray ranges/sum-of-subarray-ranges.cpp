class Solution {
  public:
    int sub_max(vector<int>& arr){
        int n=arr.size();
        vector<int>pge(n);
        vector<int>nge(n);
        pge=get_pge(arr);
        nge=get_nge(arr);
        int sum=0;
        for(int i=0;i<n;i++){
            int left=i-pge[i];
            int right=nge[i]-i;
            sum+=(left*right*arr[i]);
        }
        return sum;
    }
    vector<int>get_pge(vector<int>& arr){
        stack<int>st;
        int n=arr.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]<=arr[i])
                st.pop();
            ans[i]=(st.empty()) ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int>get_nge(vector<int>& arr){
        stack<int>st;
        int n=arr.size();
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]<arr[i])
                st.pop();
            ans[i]=(st.empty()) ? n : st.top();
            st.push(i);
        }
        return ans;
    }
    int sub_min(vector<int>& arr){
        int n=arr.size();
        vector<int>pse(n);
        vector<int>nse(n);
        pse=get_pse(arr);
        nse=get_nse(arr);
        int sum=0;
        for(int i=0;i<n;i++){
            int left=i-pse[i];
            int right=nse[i]-i;
            sum+=(left*right*arr[i]);
        }
        return sum;
    }
    vector<int>get_nse(vector<int>& arr){
        stack<int>st;
        int n=arr.size();
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>arr[i])
                st.pop();
            ans[i]=(st.empty()) ? n : st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int>get_pse(vector<int>& arr){
        stack<int>st;
        int n=arr.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i])
                st.pop();
            ans[i]=(st.empty()) ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }
    int subarrayRanges(vector<int>& arr) {
       return sub_max(arr)-sub_min(arr);
    }
};