class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int>myset;
        for(auto num:a){
            myset.insert(num);
        }
        for(auto num:b){
            myset.insert(num);
        }
        vector<int>ans;
        for(auto num:myset){
            ans.push_back(num);
        }
        return ans;
    }
};