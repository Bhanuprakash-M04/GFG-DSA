class Solution {
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        int n=adj.size();
        int vis[n]={0};
        vector<int>ans;
        traversal(adj,ans,vis,0);
        return ans;
    }
    void traversal(vector<vector<int>>& adj,vector<int>&ans,int vis[],int node){
        vis[node]=1;
        ans.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it])
                traversal(adj,ans,vis,it);
        }
    }
};