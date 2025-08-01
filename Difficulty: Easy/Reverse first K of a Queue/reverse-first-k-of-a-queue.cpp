class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        if(k>q.size())
            return q;
        stack<int>st;
        queue<int>qu;
        while(k-- && !q.empty()){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            qu.push(st.top());
            st.pop();
        }
        while(!q.empty()){
            qu.push(q.front());
            q.pop();
        }
        return qu;
    }
};