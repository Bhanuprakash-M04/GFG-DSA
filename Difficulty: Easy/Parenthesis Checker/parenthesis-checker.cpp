class Solution {
  public:
    bool isBalanced(string& s) {
        int n=s.length();
        stack<int>st;
        for(char ch:s){
            if(ch=='(' || ch=='[' || ch=='{')
                st.push(ch);
            else if(st.empty() && (ch==')' || ch==']' || ch=='}'))
                return false;
            else if((ch==')' && st.top()=='(') || (ch==']' && st.top()=='[') || (ch=='}' && st.top()=='{')){
                st.pop();
            }
            else
                return false;
        }
        return (st.empty()) ? true : false;
    }
};