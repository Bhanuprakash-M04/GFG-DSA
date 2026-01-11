class Solution {
  public:
    void generate(string& s,int n,vector<string>& ans,string &curr,vector<bool>& used){
        if(curr.length()==s.length()){
            ans.push_back(curr);
            return;
        }
        for(int i=0;i<n;i++){
            if(used[i])
                continue;
            if(i>0 && s[i]==s[i-1] && !used[i-1])
                continue;
            used[i]=true;
            curr.push_back(s[i]);
            generate(s,n,ans,curr,used);
            used[i]=false;
            curr.pop_back();
        }
        
    }
    vector<string> findPermutation(string &s) {
        sort(s.begin(),s.end());
        vector<string>ans;
        string curr="";
        int n=s.length();
        vector<bool>used(n,false);
        generate(s,n,ans,curr,used);
        return ans;
    }
};
