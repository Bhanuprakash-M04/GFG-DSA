class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int fmax=-1;
        int smax=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>fmax){
                smax=fmax;
                fmax=arr[i];
            }
            else if(arr[i]<fmax){
                smax=max(smax,arr[i]);
            }
        }
        return smax;
    }
};