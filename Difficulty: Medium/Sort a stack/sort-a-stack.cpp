class Solution {
  public:
    void sortStack(stack<int> &st) {
        stack<int>temp;
        while(!st.empty()){
            int ele=st.top();
            st.pop();
            while(!temp.empty() && temp.top()<ele){
                int val=temp.top();
                temp.pop();
                st.push(val);
            }
            temp.push(ele);
        }
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }
};
