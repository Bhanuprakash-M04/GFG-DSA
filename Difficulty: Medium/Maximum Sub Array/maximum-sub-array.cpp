// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        // code here
        int maxi=INT_MIN;
        int sum=0;
        int start=-1,ans_st=-1,ans_end=-1;
        for(int i=0;i<arr.size();i++){
            if(sum==0)
                start=i;
            if(arr[i]>=0)
            {
                sum+=arr[i];
               if(maxi<sum || (sum == maxi && start <= ans_st)){
                    maxi=max(maxi,sum);
                    ans_st=start;
                    ans_end=i;
                }
            }
            else
                sum=0;
        }
        vector<int>res;
        if(maxi<0)
        {
            res.push_back(-1);
            return res;
        }
        for(int i=ans_st;i<=ans_end;i++){
            res.push_back(arr[i]);
        }
        return res;
    }
};