class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int ans=-1;
        int n=s.length();
        unordered_map<int,int>mymap;
        int left=0;
        for(int right=0;right<n;right++){
            mymap[s[right]]++;
            while(mymap.size()>k){
                mymap[s[left]]--;
                if(mymap[s[left]]==0)
                    mymap.erase(s[left]);
                left++;
            }
            if(mymap.size()==k)
                ans=max(ans,right-left+1);
        }
        return ans;
    }
};