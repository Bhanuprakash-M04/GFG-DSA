class Solution {
  public:
    int allocate(vector<int>& arr, int mid){
        int sum=0;
        int n=arr.size();
        int cnt=1;
        for(int i=0;i<n;i++){
            if(sum+arr[i]<=mid){
                sum+=arr[i];
            }
            else{
                sum=arr[i];
                cnt++;
            }
        }
        
        return cnt;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if(k>n)
            return -1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int low=*max_element(arr.begin(),arr.end());
        int high=sum;
        int ans=INT_MIN;
        while(low<=high){
            int mid=(low+high)/2;
            if(allocate(arr,mid)<=k){
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
    }
};