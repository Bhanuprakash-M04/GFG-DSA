class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n=arr.size();
        vector<int>pre(n);
        vector<int>suf(n);
        int maxi=0;
        for(int i=0;i<n;i++){
            pre[i]=maxi;
            maxi=max(maxi,arr[i]);
        }
        maxi=0;
        for(int i=n-1;i>=0;i--){
            suf[i]=maxi;
            maxi=max(maxi,arr[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int val=max(0,min(pre[i],suf[i])-arr[i]);
            ans+=val;
        }
        return ans;
        
    }
};