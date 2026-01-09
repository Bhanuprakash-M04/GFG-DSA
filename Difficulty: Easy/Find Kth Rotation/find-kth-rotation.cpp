class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int low=0;
        int high=n-1;
        int ind=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[low]<=arr[mid]){
                if(arr[ind]>arr[low]){
                    ind=low;
                }
                low=mid+1;
            }
            else{
                if(arr[ind]>arr[mid]){
                    ind=mid;
                }
                high=mid-1;
            }
        }
        return ind;
    }
};
