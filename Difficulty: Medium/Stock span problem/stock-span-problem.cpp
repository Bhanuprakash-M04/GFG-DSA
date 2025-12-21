class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        vector<int>ans;
        stack<int>st;
        int n=arr.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]<=arr[i])
                st.pop();
            int val=(st.empty() ? -1 : st.top());
            ans.push_back(i-val);
            st.push(i);
        }
        return ans;
    }
};