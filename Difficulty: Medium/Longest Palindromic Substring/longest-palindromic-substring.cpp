class Solution {
  public:
    string getLongestPal(string &s) {
        int n=s.length();
        string odd="";
        string even="";
        string str="";
        for(int i=0;i<n;i++){
            odd=get(s,i,i);
            even=get(s,i,i+1);
            if(odd.length()>str.length())
                str=odd;
            if(even.length()>str.length())
                str=even;
        }
        return str;
    }
    string get(string s,int left,int right){
        int n=s.length();
        string res="";
        while(left>=0 && right<n && s[left]==s[right]){
            res=s.substr(left,right-left+1);
            left--;
            right++;
        }
        return res;
    }
};