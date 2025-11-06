// User function Template for C++

class Solution {
  public:
    string preToInfix(string s) {
        int n=s.length();
        int i=n-1;
        stack<string>st;
        while(i>=0){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                st.push(string(1,s[i]));
            }
            else{
                string t1=st.top();
                st.pop();
                string t2=st.top();
                st.pop();
                string res='('+t1+string(1,s[i])+t2+')';
                st.push(res);
            }
            i--;
        }
        return st.top();
    }
};