class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        n=n>>k;
        return ((n&1)%2==0) ? false : true; 
    }
};