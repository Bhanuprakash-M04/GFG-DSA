class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int>myset;
        for(int i:a)
            myset.insert(i);
        for(int j:b)
            myset.insert(j);
        vector<int>ans;
        for(auto it:myset){
            ans.push_back(it);
        }
        return ans;
    }
};