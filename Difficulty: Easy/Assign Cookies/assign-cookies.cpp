class Solution {
  public:
    int maxChildren(vector<int> &greed, vector<int> &cookie) {
        sort(greed.begin(),greed.end());
        sort(cookie.begin(),cookie.end());
        int cnt=0;
        int n=greed.size();
        int m=cookie.size();
        int p1=0;
        int p2=0;
        while(p1<n && p2<m){
            if(cookie[p2]>=greed[p1]){
                p1++;
                cnt++;
            }
            p2++;
        }
        return cnt;
    }
};