class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        unordered_set<char>myset;
        int left=0;
        int n=s.length();
        int ans=0;
        for(int right=0;right<n;right++){
            while(myset.find(s[right])!=myset.end()){
                myset.erase(s[left]);
                left++;
            }
            ans=max(ans,right-left+1);
            myset.insert(s[right]);
        }
        return ans;
    }
};