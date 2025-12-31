class Solution {
  public:
    void generate(string curr,int n,vector<string>& ans){
        if(curr.length()==n){
            ans.push_back(curr);
            return ;
        }
        generate(curr+'0',n,ans);
        generate(curr+'1',n,ans);
    }
    vector<string> binstr(int n) {
        vector<string>ans;
        generate("",n,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};