class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        unordered_map<int,int>mymap;
        int n=arr.size();
        int sum=0;
        int maxLen=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0)
                maxLen=max(maxLen,i+1);
            if(mymap.find(sum)!=mymap.end()){
                maxLen=max(maxLen,i-mymap[sum]);
            }
            if(mymap.find(sum)==mymap.end())
                mymap[sum]=i;
        }
        return maxLen;
    }
};