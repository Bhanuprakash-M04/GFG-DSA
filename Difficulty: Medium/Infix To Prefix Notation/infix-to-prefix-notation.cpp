class Solution {
  public:
    string infixToPrefix(string &s) {
        int n=s.length();
        stack<char>st;
        string ans="";
        rever(s,n);
        int i=0;
        while(i<n){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                ans+=s[i];
            }
            else if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                while(!st.empty() && st.top()!='('){
                    ans+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() && s[i]=='^' && priority(s[i])==priority(st.top())){
                    ans+=st.top();
                    st.pop();
                }
                while(!st.empty() && priority(s[i]) < priority(st.top())){
                    ans+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            i++;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int priority(char ch){
        if(ch=='^')
            return 3;
        if(ch=='*' || ch=='/')
            return 2;
        if(ch=='+' || ch=='-')
            return 1;
        return -1;
    }
    void rever(string &s,int n){
        for(int i=0;i<n/2;i++){
            swap(s[i],s[n-i-1]);
        }
        for(int i=0;i<n;i++){
            if(s[i]=='(')
                s[i]=')';
            else if(s[i]==')')
                s[i]='(';
        }
    }
};
