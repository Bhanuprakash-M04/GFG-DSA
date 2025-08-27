class Solution {
  public:
    void merge(vector<int>& arr,int low,int mid,int high){
        vector<int>temp;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right])
                temp.push_back(arr[left++]);
            else
                temp.push_back(arr[right++]);
        }
        while(left<=mid){
            temp.push_back(arr[left++]);
        }
        while(right<=high){
            temp.push_back(arr[right++]);
        }
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
    }
    int checkvalid(vector<int>& arr, int low, int mid,int high){
        int cnt=0;
        int right=mid+1;
        for(int i=low;i<=mid;i++){
            while(right<=high && arr[i]>arr[right]){
                right++;
            }
            cnt+=(right-(mid+1));
        }
        return cnt;
    }
    int mergeSort(vector<int>& arr,int low,int high){
        if(low>=high)
            return 0;
        int mid=(low+high)/2;
        int cnt=0;
        cnt+=mergeSort(arr,low,mid);
        cnt+=mergeSort(arr,mid+1,high);
        cnt+=checkvalid(arr,low,mid,high);
        merge(arr,low,mid,high);
        return cnt;
    }
    int inversionCount(vector<int> &arr) {
        // Code Here
        return mergeSort(arr,0,arr.size()-1);
    }
};