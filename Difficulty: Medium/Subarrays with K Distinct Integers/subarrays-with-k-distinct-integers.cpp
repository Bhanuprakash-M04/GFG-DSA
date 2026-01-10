class Solution {
  public:
    int exactlyK(vector<int> &arr, int k) {
        return count(arr,k)-count(arr,k-1);
    }
    int count(vector<int>& arr,int k){
        int ans=0;
        int n=arr.size();
        int left=0;
        unordered_map<int,int>mymap;
        for(int right=0;right<n;right++){
            mymap[arr[right]]++;
            while(mymap.size()>k){
                mymap[arr[left]]--;
                if(mymap[arr[left]]==0)
                    mymap.erase(arr[left]);
                left++;
            }
            if(mymap.size()<=k)
                ans+=(right-left+1);
        }
        return ans;
    }
};