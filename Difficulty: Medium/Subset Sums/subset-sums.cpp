class Solution {
  public:
    void generate(int ind,int sum,vector<int>& arr,vector<int>& ans){
        if(ind==arr.size()){
            ans.push_back(sum);
            return;
        }
        sum+=arr[ind];
        generate(ind+1,sum,arr,ans);
        sum-=arr[ind];
        generate(ind+1,sum,arr,ans);
    }
    vector<int> subsetSums(vector<int>& arr) {
        vector<int>ans;
        generate(0,0,arr,ans);
        return ans;
    }
};