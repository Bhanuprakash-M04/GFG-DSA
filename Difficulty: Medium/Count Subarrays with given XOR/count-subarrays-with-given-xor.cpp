class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        long cnt=0;
        unordered_map<int,int>mymap;
        int xr=0;
        for(int num:arr){
            xr=xr^num;
            if(xr==k)
                cnt++;
            if(mymap.find(xr^k)!=mymap.end())
                cnt+=mymap[xr^k];
            mymap[xr]++;
        }
        return cnt;
    }
};