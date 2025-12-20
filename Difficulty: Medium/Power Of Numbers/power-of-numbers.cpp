class Solution {
  public:
    int power(int num,int rev,int ans){
        if(rev==0)
            return ans;
        if(rev%2==0)
            return power(num*num,rev/2,ans);
        else
            return power(num,rev-1,ans*num);
    }
    int reverseExponentiation(int n) {
        int rev=0;
        int num=n;
        int cnt=0;
        while(n){
            int d=n%10;
            n=n/10;
            rev+=(d*pow(10,cnt));
            if(rev!=0)
                cnt++;
        }
        return power(num,rev,1);
        
    }
};