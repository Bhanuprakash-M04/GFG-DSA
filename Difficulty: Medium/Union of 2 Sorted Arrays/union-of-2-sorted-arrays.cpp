class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int p1 = 0, p2 = 0;
        int n = a.size(), m = b.size();
        vector<int> ans;

        while(p1 < n && p2 < m){
            if(a[p1] < b[p2]){
                if(ans.empty() || ans.back() != a[p1])
                    ans.push_back(a[p1]);
                p1++;
            }
            else if(b[p2] < a[p1]){
                if(ans.empty() || ans.back() != b[p2])
                    ans.push_back(b[p2]);
                p2++;
            }
            else{ // both equal
                if(ans.empty() || ans.back() != a[p1])
                    ans.push_back(a[p1]);
                p1++;
                p2++;
            }
        }

        // Add remaining elements
        while(p1 < n){
            if(ans.empty() || ans.back() != a[p1])
                ans.push_back(a[p1]);
            p1++;
        }
        while(p2 < m){
            if(ans.empty() || ans.back() != b[p2])
                ans.push_back(b[p2]);
            p2++;
        }

        return ans;
    }
};
