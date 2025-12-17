class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n=arr.size();
        int p1=0;
        int p2=n-1;
        while(p1<n/2){
            swap(arr[p1],arr[p2]);
            p1++;
            p2--;
        }
    }
};