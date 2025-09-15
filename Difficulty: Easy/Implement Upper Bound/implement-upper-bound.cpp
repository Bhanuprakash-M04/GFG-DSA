class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int low=0;
        int high=n-1;
        int ind=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]<=target){
                low=mid+1;
            }
            else{
                ind=mid;
                high=mid-1;
            }
        }
        return ind;
    }
};
