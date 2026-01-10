class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        unordered_set<char>myset;
        int n=s.length();
        int left=0;
        int ans=0;
        for(int right=0;right<n;right++){
            while(myset.find(s[right])!=myset.end()){
                myset.erase(s[left]);
                left++;
            }
            myset.insert(s[right]);
            if(myset.size()==right-left+1)
                ans=max(ans,right-left+1);
        }
        return ans;
    }
};
