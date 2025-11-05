class Solution {
  public:
    vector<int> twoOddNum(vector<int>& arr) {
        vector<int>ans;
        unordered_map<int,int>mymap;
        for(int num:arr){
            mymap[num]++;
        }
        for(auto it:mymap){
            if(it.second%2!=0)
                ans.push_back(it.first);
        }
        if(ans[0]<ans[1])
            swap(ans[0],ans[1]);
        return ans;
    }
};