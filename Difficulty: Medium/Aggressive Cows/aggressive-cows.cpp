class Solution {
  public:
    bool check(vector<int> &stalls,int k,int mid){
        int n=stalls.size();
        int last=stalls[0];
        int cnt=1;
        for(int i=0;i<n;i++){
            if(stalls[i]-last>=mid){
                cnt++;
                last=stalls[i];
                if(cnt>=k)
                    return true;
            }
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int low=0;
        int high=*max_element(stalls.begin(),stalls.end())-*min_element(stalls.begin(),stalls.end());
        int ans=0;
        sort(stalls.begin(),stalls.end());
        while(low<=high){
            int mid=(low+high)/2;
            bool value=check(stalls,k,mid);
            if(value){
                ans=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return ans;
    }
};