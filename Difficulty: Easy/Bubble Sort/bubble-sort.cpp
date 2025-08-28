class Solution {
  public:
    void solve(vector<int>& arr,int n){
        if(n==1)
            return;
        int isswapped=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                isswapped=1;
            }
        }
        if(!isswapped)
            return;
        solve(arr,n-1);
    }
    void bubbleSort(vector<int>& arr) {
        solve(arr,arr.size());
    }
};