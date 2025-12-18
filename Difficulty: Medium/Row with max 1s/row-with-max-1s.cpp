// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int n=arr.size();
        int m=arr[0].size();
        int res=-1;
        int ind=-1;
        for(int i=0;i<n;i++){
            int low=0;
            int high=m-1;
            int ans=m;
            while(low<=high){
                int mid=(low+high)/2;
                if(arr[i][mid]==1){
                    ans=min(ans,mid);
                    high=mid-1;
                }
                else
                    low=mid+1;
            }
            int ones=m-ans;
            if(ones>res){
                res=ones;
                ind=i;
            }
        }
        return ind;
    }
};