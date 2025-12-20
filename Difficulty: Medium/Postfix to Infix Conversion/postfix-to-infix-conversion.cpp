// User function Template for C++

class Solution {
  public:
    string postToInfix(string s) {
        int i=0;
        int n=s.length();
        stack<string>st;
        while(i<n){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                st.push(string(1,s[i]));
            }
            else{
                string t1=st.top();
                st.pop();
                string t2=st.top();
                st.pop();
                string res='('+t2+s[i]+t1+')';
                st.push(res);
            }
            i++;
        }
        return st.top();
    }
};