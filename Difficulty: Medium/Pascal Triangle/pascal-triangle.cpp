class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<int>ans;
        int first=1;
        for(int i=0;i<n;i++){
            ans.push_back(first);
            first=first*(n-1-i)/(i+1);
        }
        return ans;
    }
};
