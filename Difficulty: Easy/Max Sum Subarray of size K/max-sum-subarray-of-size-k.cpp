class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int left=0;
        int n=arr.size();
        int sum=0;
        int maxi=0;
        for(int right=0;right<n;right++){
            sum+=arr[right];
            if(right-left+1>k)
                sum-=arr[left++];
            if(right-left+1==k){
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }
};