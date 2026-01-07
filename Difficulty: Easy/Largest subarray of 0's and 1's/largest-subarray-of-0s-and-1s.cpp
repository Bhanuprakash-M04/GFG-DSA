class Solution {
  public:
    int maxLen(vector<int> &arr) {
        int maxi=0;
        int n=arr.size();
        unordered_map<int,int>mymap;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(arr[i]==0 ? -1 : 1);
            if(sum==0)
                maxi=max(maxi,i+1);
            if(mymap.find(sum)!=mymap.end())
                maxi=max(maxi,i-mymap[sum]);
            else
                mymap[sum]=i;
        }
        return maxi;
    }
};