class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        vector<int>ans;
        unordered_map<int,int>mymap;
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==target){
                ans.push_back(1);
                ans.push_back(i+1);
                break;
            }
            if(mymap.find(sum-target)!=mymap.end()){
                ans.push_back(mymap[sum-target]+1);
                ans.push_back(i+1);
                break;
            }
            mymap[sum]=i+1;
        }
        if(ans.size()==0)
            return {-1};
        return ans;
    }
};