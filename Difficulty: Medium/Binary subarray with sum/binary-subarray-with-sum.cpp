class Solution {
  public:
    int numberOfSubarrays(vector<int>& arr, int target) {
        return check(arr,target)-check(arr,target-1);
    }
    int check(vector<int>& nums,int target){
        int sum=0;
        int left=0;
        int ans=0;
        int n=nums.size();
        for(int right=0;right<n;right++){
            sum+=nums[right];
            while(sum>target){
                sum-=nums[left];
                left++;
            }
            ans+=(right-left+1);
        }
        return ans;
    }
};