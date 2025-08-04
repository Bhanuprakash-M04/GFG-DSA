class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int fmaxi=arr[0];
        for(int num:arr){
            fmaxi=max(fmaxi,num);
        }
        int smaxi=-1;
        for(int num:arr){
            if(smaxi<num && num!=fmaxi)
                smaxi=num;
        }
        return smaxi;
    }
};