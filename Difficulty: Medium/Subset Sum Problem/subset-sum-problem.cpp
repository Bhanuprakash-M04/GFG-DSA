class Solution {
  public:
    bool check(int ind,vector<int>& arr, int sum){
        if(ind==arr.size() || sum<=0){
            if(sum==0)
                return true;
            return false;
        }
        if(check(ind+1,arr,sum-arr[ind]))
            return true;
        if(check(ind+1,arr,sum))
            return true;
        return false;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        return check(0,arr,sum);
    }
};