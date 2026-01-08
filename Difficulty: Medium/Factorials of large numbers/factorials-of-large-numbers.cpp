// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        if(n==0 || n==1)
            return {1};
        vector<int>ans=factorial(n-1);
        int m=ans.size();
        int carry=0;
        vector<int>res;
        for(int i=m-1;i>=0;i--){
            int num=(ans[i]*n)+carry;
            if(num>=10){
                carry=num/10;
                res.push_back(num%10);
            }
            else if(num<10){
                carry=0;
                res.push_back(num);
            }
        }
        while(carry!=0){
            res.push_back(carry%10);
            carry=carry/10;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};