class Solution {
  public:
    bool check(vector<int>& arr,int k,int mid){
        int painters=1;
        int curr=0;
        for(int num:arr){
            if(curr+num<=mid){
                curr+=num;
            }
            else{
                painters++;
                curr=num;
            }
        }
        return (painters<=k);
    }
    int minTime(vector<int>& arr, int k) {
        int low=*max_element(arr.begin(),arr.end());
        int sum=0;
        for(int num:arr)
            sum+=num;
        int high=sum;
        while(low<=high){
            int mid=(low+high)/2;
            if(check(arr,k,mid))
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};