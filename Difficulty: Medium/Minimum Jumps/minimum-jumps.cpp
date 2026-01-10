class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();
        int jumps=0;
        int left=0;
        int right=0;
        while(right<n-1){
            int far=0;
            for(int i=left;i<=right;i++){
                far=max(far,i+arr[i]);
            }
            if(far==0)
                return -1;
            left=right+1;
            right=far;
            jumps++;
        }
        return jumps;
    }
};
