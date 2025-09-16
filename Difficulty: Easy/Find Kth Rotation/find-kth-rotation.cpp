class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int low=0;
        int high=n-1;
        int ans=INT_MAX;
        int ind=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[low]<=arr[mid]){
                if(ans>arr[low]){
                    ind=low;
                    ans=arr[low];
                }
                low=mid+1;
            }
            else{
                if(ans>arr[mid]){
                    ind=mid;
                    ans=arr[mid];
                }
                high=mid-1;
            }
        }
        return ind;
    }
};
