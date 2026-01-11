class Solution {
  public:
    void generate(vector<int>& arr,vector<vector<int>>& ans,vector<int>& curr,vector<bool>& used){
        if(curr.size()==arr.size()){
            ans.push_back(curr);
            return;
        }
        for(int i=0;i<arr.size();i++){
            if(!used[i]){
                curr.push_back(arr[i]);
                used[i]=true;
                generate(arr,ans,curr,used);
                curr.pop_back();
                used[i]=false;
            }
        }
    }
    vector<vector<int>> permuteDist(vector<int>& arr) {
        vector<vector<int>>ans;
        vector<int>curr;
        int n=arr.size();
        vector<bool>used(n,false);
        generate(arr,ans,curr,used);
        return ans;
        
    }
};