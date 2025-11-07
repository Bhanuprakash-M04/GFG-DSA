
class Solution {
  public:

    vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
        vector<int>ans;
        int n=arr.size();
        for(int ind:indices){
            int cnt=0;
            for(int j=ind+1;j<n;j++){
                if(arr[ind]<arr[j])
                    cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};