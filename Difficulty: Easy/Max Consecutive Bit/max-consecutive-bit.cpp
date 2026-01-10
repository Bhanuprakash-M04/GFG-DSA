class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int n=arr.size();
        int f=0,l=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                f++;
                l=0;
            }
            else{
                l++;
                f=0;
            }
            ans=max(ans,max(f,l));
        }
        return ans;
    }
};