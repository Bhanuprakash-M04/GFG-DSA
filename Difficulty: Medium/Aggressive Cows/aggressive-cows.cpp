class Solution {
  public:
    bool canplace(vector<int>& stalls,int k,int mid){
        int last=stalls[0];
        int cnt=1;
        int n=stalls.size();
        for(int i=1;i<n;i++){
            if(stalls[i]-last>=mid){
                cnt++;
                last=stalls[i];
            }
            if(cnt>=k)
                return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        int low=1;
        int maxi=*max_element(stalls.begin(),stalls.end());
        int mini=*min_element(stalls.begin(),stalls.end());
        int high=maxi-mini;
        while(low<=high){
            int mid=(low+high)/2;
            if(canplace(stalls,k,mid)){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};