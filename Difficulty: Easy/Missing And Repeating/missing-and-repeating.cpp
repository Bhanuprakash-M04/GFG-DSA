class Solution {
  public:
    vector<int> findTwoElement(vector<int>& nums) {
        // code here
        int n=nums.size();
        int miss=0;
        int rep=0;
        unordered_set<int>myset;
        for(int i=0;i<n;i++){
            if(myset.find(nums[i])!=myset.end())
                rep=nums[i];
            myset.insert(nums[i]);
        }
        for(int i=1;i<=n;i++){
            if(myset.find(i)==myset.end())
                miss=i;
        }
        return {rep,miss};
    }
};