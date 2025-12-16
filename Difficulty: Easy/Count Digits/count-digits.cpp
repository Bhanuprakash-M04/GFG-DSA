class Solution {
  public:
    int countDigits(int n) {
        int cnt=0;
        while(n){
            n=n/10;
            cnt++;
        }
        return cnt;
        
    }
};