
class Solution {
  public:
    vector<vector<int>> triplets(vector<int> &arr) {
        vector<vector<int>>ans;
        set<vector<int>>myset;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==0){
                    vector<int>res(3);
                    res[0]=arr[i];
                    res[1]=arr[j];
                    res[2]=arr[k];
                    sort(res.begin(),res.end());
                    myset.insert(res);
                    j++;
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else
                    k--;
            }
        }
        for(auto i:myset){
            ans.push_back(i);
        }
        return ans;
        
    }
};
