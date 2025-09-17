class Solution {
  public:
  int check(int mid,int n){
      int ans=1;
      for(int i=0;i<n;i++){
          ans=ans*mid;
      }
      return ans;
  }
    int nthRoot(int n, int m) {
        // Code here
        int low=1;
        int high=m;
        while(low<=high){
            int mid=(low+high)/2;
            if(check(mid,n)==m)
                return mid;
            else if(check(mid,n)>m)
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }
};