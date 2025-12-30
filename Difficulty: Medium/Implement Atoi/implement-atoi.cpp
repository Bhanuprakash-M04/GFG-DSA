class Solution {
  public:
    int myAtoi(string& s) {
        long long ans=0;
        int n=s.length();
        int i=0;
        bool flag=true;
        char ch='+';
        while(i<n){
            if(s[i]==' ' && flag){
                i++;
                continue;
            }
            else if(s[i]=='0' && flag){
                i++;
                continue;
            }
            else if(s[i]=='+' || s[i]=='-'){
                if(flag){
                    ch=s[i];
                    i++;
                    flag=false;
                }
                else
                    break;
            }
            else if(s[i]>='0' && s[i]<='9'){
                ans=(ans*10)+(s[i]-'0');
                i++;
                flag=false;
            }
            else
                break;
        }
        if(ch=='-')
            ans=-ans;
        if(ans>=INT_MAX)
            return INT_MAX;
        if(ans<=INT_MIN)
            return INT_MIN;
        return ans;
    }
};