class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        int p1=n-1;
        int p2=0;
        while(p1>=0 && p2<m){
            if(a[p1]>b[p2]){
                swap(a[p1],b[p2]);
            }
            p1--;
            p2++;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
    }
};