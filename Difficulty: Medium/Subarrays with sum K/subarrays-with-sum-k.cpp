class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        unordered_map<int,int>mymap;
        int n=arr.size();
        int sum=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==k)
                cnt++;
            if(mymap.find(sum-k)!=mymap.end())
                cnt+=mymap[sum-k];
            mymap[sum]++;
        }
        return cnt;
    }
};