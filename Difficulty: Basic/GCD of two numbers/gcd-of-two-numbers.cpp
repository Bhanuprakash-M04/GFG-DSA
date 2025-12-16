class Solution {
  public:
    int gcd(int a, int b) {
        int mini=min(a,b);
        int maxi=max(a,b);
        while(maxi%mini!=0){
            int val=maxi%mini;
            maxi=mini;
            mini=val;
        }
        return mini;
    }
};
