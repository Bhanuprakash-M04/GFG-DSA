// User function Template for C++

class Solution {
  public:
    int prime[200000];
    void sieve() {
        for(int i=2;i<200000;i++)
            prime[i]=i;
        for(int i=2;i*i<=200000;i++){
            if(prime[i]==i){
                for(int j=i*i;j<=200000;j+=i){
                    if(prime[j]==j)
                        prime[j]=i;
                }
            }
        }
    }

    vector<int> findPrimeFactors(int N) {
        vector<int>ans;
        while(N>1){
            ans.push_back(prime[N]);
            N=N/prime[N];
        }
        return ans;
    }
};