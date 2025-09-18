class Solution {
  public:
    bool paint(vector<int>& arr,int mid ,int k){
        int n=arr.size();
        int sum=0;
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
        return cnt<=k;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int low=*max_element(arr.begin(),arr.end());
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int high=sum;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(paint(arr,mid,k)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};