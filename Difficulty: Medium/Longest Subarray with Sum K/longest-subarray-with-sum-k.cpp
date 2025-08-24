class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>mymap;
        int prefix_sum=0;
        int maxlen=0;
        for(int i=0;i<arr.size();i++){
            prefix_sum+=arr[i];
            if(prefix_sum==k)
                maxlen=max(maxlen,i+1);
            if(mymap.find(prefix_sum-k)!=mymap.end())
                maxlen=max(maxlen,i-mymap[prefix_sum-k]);
            if(mymap.find(prefix_sum)==mymap.end())
                mymap[prefix_sum]=i;
        }
        return maxlen;
    }
};