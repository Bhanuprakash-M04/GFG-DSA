class Solution {
  public:
    void generate(vector<int>& arr,vector<vector<int>>& ans,vector<int>& curr,vector<int>& used){
        if(curr.size()==arr.size()){
            ans.push_back(curr);
            return;
        }
        for(int i=0;i<arr.size();i++){
            if(used[i])
                continue;
            if(i>0 && arr[i]==arr[i-1] && used[i-1]==true)
                continue;
            used[i]=true;
            curr.push_back(arr[i]);
            generate(arr,ans,curr,used);
            used[i]=false;
            curr.pop_back();
        }
    }
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int>curr;
        vector<int>used(n,false);
        generate(arr,ans,curr,used);
        return ans;
    }
};