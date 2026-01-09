class Solution {
  public:
    string maxOdd(string s) {
        int n=s.length();
        int ind=-1;
        for(int i=n-1;i>=0;i--){
            if((s[i]-'0')%2!=0){
                ind=i;
                break;
            }
        }
        return s.substr(0,ind+1);
    }
};