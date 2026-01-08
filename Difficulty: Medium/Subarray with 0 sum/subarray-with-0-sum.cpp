class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        unordered_map<int,int>mymap;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==0)
                return true;
            if(mymap.find(sum)!=mymap.end())
                return true;
            mymap[sum]++;
        }
        return false;
    }
};