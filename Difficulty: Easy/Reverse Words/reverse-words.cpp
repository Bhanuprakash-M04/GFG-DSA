class Solution {
  public:
    string reverseWords(string &s) {
        vector<string>ans;
        string curr="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]!='.'){
                curr+=s[i];
            }
            else{
                if(curr!=""){
                    ans.push_back(curr);
                }
                curr="";
            }
        }
        if(curr!="")
            ans.push_back(curr);
        reverse(ans.begin(),ans.end());
        string res="";
        for(int i=0;i<ans.size();i++){
            res+=ans[i];
            if(i!=ans.size()-1)
                res+='.';
        }
        return res;
    }
};