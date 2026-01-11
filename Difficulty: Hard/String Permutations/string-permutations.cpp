class Solution {
  public:
    // Complete this function
    void generate(string& s,vector<string>& ans,string& curr,vector<bool>& used){
        if(curr.length()==s.length()){
            ans.push_back(curr);
            return;
        }
        for(int i=0;i<s.length();i++){
            if(used[i])
                continue;
            curr.push_back(s[i]);
            used[i]=true;
            generate(s,ans,curr,used);
            used[i]=false;
            curr.pop_back();
        }
    }
    vector<string> permutation(string S) {
        vector<string>ans;
        string curr="";
        int n=S.length();
        vector<bool>used(n,false);
        generate(S,ans,curr,used);
        sort(ans.begin(),ans.end());
        return ans;
    }
};