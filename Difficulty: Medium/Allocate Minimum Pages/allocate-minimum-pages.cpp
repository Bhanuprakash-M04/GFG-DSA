class Solution {
  public:
    bool canAllocate(vector<int>& arr,int k,int mid){
        int n=arr.size();
        int cur_sum=0;
        int cnt=1;
        for(int i=0;i<n;i++){
            if(cur_sum+arr[i]<=mid)
                cur_sum+=arr[i];
            else{
                cnt++;
                cur_sum=arr[i];
            }
        }
        if(cnt<=k)
            return true;
        return false;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if(n<k)
            return -1;
        int low=*max_element(arr.begin(),arr.end());
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=arr[i];
        int high=sum;
        while(low<=high){
            int mid=(low+high)/2;
            if(canAllocate(arr,k,mid)){
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return low;
    }
    
};