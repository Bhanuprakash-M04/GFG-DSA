class Solution {
  public:
    void generate(int ind,int n,int k,vector<vector<int>>& ans,vector<int>& curr){
        if(n==0 && k==0){
            ans.push_back(curr);
            return;
        }
        if(n<0 || k<0)
            return;
        for(int i=ind;i<=9;i++){
            n-=i;
            k--;
            curr.push_back(i);
            generate(i+1,n,k,ans,curr);
            curr.pop_back();
            n+=i;
            k++;
        }
    }
    vector<vector<int>> combinationSum(int n, int k) {
        vector<vector<int>>ans;
        vector<int>curr;
        generate(1,n,k,ans,curr);
        return ans;
    }
};