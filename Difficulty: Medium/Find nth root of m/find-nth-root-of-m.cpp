class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int low=0;
        int high=m;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(pow(mid,n)==m)
            {
                ans=mid;
                break;
            }
            else if(pow(mid,n)>m)
                high=mid-1;
            else
                low=mid+1;
        }
        return ans;
    }
};