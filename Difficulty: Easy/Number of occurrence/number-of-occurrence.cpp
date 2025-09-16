class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int low=0;
        int high=n-1;
        int first=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(arr[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        int second=-1;
        low=0;
        high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                second=mid;
                low=mid+1;
            }
            else if(arr[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        if(first==-1 && second==-1)
            return 0;
        return second-first+1;
        
    }
};
