class Solution {
  public:
    bool check(int n,vector<int>& arr,int ind,int k,int sum){
        if(sum>k)
            return false;
        if(ind==n){
            if(sum==k){
                return true;
            }
            else
                return false;
        }
        sum+=arr[ind];
        if(check(n,arr,ind+1,k,sum))
            return true;
        sum-=arr[ind];
        if(check(n,arr,ind+1,k,sum))
            return true;
        return false;
    }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        return check(n,arr,0,k,0);
    }
};