class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maxi=arr[0];
        for(int num:arr){
            maxi=max(maxi,num);
        }
        return maxi;
    }
};
