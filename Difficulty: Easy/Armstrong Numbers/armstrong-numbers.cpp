// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int sum=0;
        int num=n;
        while(n){
            int val=n%10;
            sum=sum+pow(val,3);
            n=n/10;
        }
        return (sum==num);
        
    }
};