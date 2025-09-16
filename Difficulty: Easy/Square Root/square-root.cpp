class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int low=0;
        int high=sqrt(n);
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(mid*mid<=n){
                ans=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return ans;
    }
};