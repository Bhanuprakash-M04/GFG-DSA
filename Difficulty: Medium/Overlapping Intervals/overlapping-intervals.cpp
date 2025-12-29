class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int f=arr[0][0];
        int l=arr[0][1];
        for(int i=1;i<n;i++){
            if(l<arr[i][0]){
                ans.push_back({f,l});
                f=arr[i][0];
                l=arr[i][1];
            }
            else{
                f=min(f,arr[i][0]);
                l=max(l,arr[i][1]);
            }
        }
        ans.push_back({f,l});
        return ans;
    }
};