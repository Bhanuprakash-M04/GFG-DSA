class Solution {
  public:
    int totalElements(vector<int> &arr) {
        unordered_map<int,int>mymap;
        int left=0;
        int ans=0;
        int n=arr.size();
        for(int right=0;right<n;right++){
            mymap[arr[right]]++;
            if(mymap.size()>2){
                mymap[arr[left]]--;
                if(mymap[arr[left]]==0)
                    mymap.erase(arr[left]);
                left++;
            }
            if(mymap.size()<=2)
                ans=max(ans,right-left+1);
        }
        return ans;
    }
};