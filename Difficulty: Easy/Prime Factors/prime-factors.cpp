class Solution {
  public:
    vector<int> primeFac(int n) {
        vector<int>ans;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(isprime(i))
                    ans.push_back(i);
                if(n/i!=i){
                    if(isprime(n/i))
                        ans.push_back(n/i);
                }
            }
        }
        return ans;
    }
    bool isprime(int n){
        if(n==1)
            return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)
                return false;
        }
        return true;
    }
};