class Solution {
  public:
    int findMin(int n) {
        // int ans=0;
        // ans=ans+(n/10);
        // n=n%10;
        // ans=ans+(n/5);
        // n=n%5;
        // ans=ans+(n/2);
        // n=n%2;
        // ans=ans+(n/1);
        // n=n%1;
        // return ans;
        
        int arr[4]={1,2,5,10};
        int ans=0;
        for(int i=3;i>=0;i--){
            while(n>=arr[i]){
                ans++;
                n=n-arr[i];
            }
        }
        return ans;
    }
};