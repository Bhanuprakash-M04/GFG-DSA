class Solution {
  public:
    int countSubstring(string s) {
        int lastA=-1;
        int lastB=-1;
        int lastC=-1;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a')
                lastA=i;
            if(s[i]=='b')
                lastB=i;
            if(s[i]=='c')
                lastC=i;
            if(lastA!=-1 && lastB!=-1 && lastC!=-1)
                ans+=(min(lastA,min(lastB,lastC))+1);
        }
        return ans;
    }
};