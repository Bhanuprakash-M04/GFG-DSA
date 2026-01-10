class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        int left=0;
        int n=arr.size();
        int ans=0;
        int cnt=0;
        for(int right=0;right<n;right++){
            if(arr[right]==0)
                cnt++;
            while(cnt>k && left<n){
                if(arr[left]==0)
                    cnt--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};
