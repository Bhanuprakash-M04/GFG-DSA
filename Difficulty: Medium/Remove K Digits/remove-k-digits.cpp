class Solution {
  public:
    string removeKdig(string &s, int k) {
        stack<int>st;
        int n=s.length();
        if(k==n)
            return "0";
        for(int i=0;i<n;i++){
            while(k>0 && !st.empty() && st.top()>s[i]-'0'){
                st.pop();
                k--;
            }
            st.push(s[i]-'0'); 
        }
        while(k>0){
            st.pop();
            k--;
        }
        string ans="";
        while(!st.empty()){
            ans+=char(st.top()+'0');
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        if(ans.length()==1)
            return ans;
        int ind=0;
        for(char ch:ans){
            if(ch=='0')
                ind++;
            else
                break;
        }
        if(ind==ans.length())
            return "0";
        return ans.substr(ind);
    }
};