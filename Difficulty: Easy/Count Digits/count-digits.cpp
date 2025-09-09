class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int num=n;
        int cnt=0;
        while(n){
            int val=n%10;
            if(val!=0 && num%val==0)
                cnt++;
            n=n/10;
        }
        return cnt;
    }
};