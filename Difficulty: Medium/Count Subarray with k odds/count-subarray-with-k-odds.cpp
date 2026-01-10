class Solution {
  public:
    int countSubarrays(vector<int>& arr, int k) {
        return count(arr,k)-count(arr,k-1);
    }
    int count(vector<int>& arr,int k){
        int cnt=0;
        int ans=0;
        int left=0;
        int n=arr.size();
        for(int right=0;right<n;right++){
            if(arr[right]%2==1)
                cnt++;
            while(cnt>k){
                if(arr[left]%2==1)
                    cnt--;
                left++;
            }
            if(cnt<=k)
                ans+=(right-left+1);
        }
        return ans;
    }
};