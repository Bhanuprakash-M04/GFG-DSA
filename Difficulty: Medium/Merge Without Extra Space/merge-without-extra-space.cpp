class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n=a.size();
        int m=b.size();
        int gap=(n+m)/2+(n+m)%2; // to get ceil value
        while(gap>0){
            int left=0;
            int right=gap;
            while(right<n+m){
                if(right<n && a[left]>a[right])
                    swap(a[left],a[right]);
                else if(left<n && right>=n && a[left]>b[right-n])
                    swap(a[left],b[right-n]);
                else if(left>=n && right>=n && b[left-n]>b[right-n])
                    swap(b[left-n],b[right-n]);
                left++;
                right++;
            }
            if(gap==1)
                break;
            gap=(gap)/2+(gap%2);
        }
    }
};