class Solution {
  public:
    void solve(vector<int>& arr,int start,int n){
        if(start>=n-1)
            return;
        int mini=start;
        for(int i=start;i<n;i++){
            if(arr[i]<arr[mini])
                mini=i;
        }
        if(start!=mini)
            swap(arr[mini],arr[start]);
        solve(arr,start+1,n);
    }
    void selectionSort(vector<int> &arr) {
        solve(arr,0,arr.size());
    }
};