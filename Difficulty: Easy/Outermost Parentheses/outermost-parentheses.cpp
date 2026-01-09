class Solution {
  public:
    string removeOuter(string& s) {
        stack<int>st;
        int n=s.length();
        string res="";
        for(int i=0;i<n;i++){
            if(!st.empty() && s[i]=='('){
                res+='(';
                st.push('(');
            }
            else if(s[i]=='('){
                st.push('(');
            }
            else if(s[i]==')'){
                st.pop();
                if(!st.empty())
                    res+=')';
            }
        }
        return res;
    }
};