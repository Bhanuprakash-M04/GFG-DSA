class Solution {
  public:
    string frequencySort(string &s) {
        map<char,int>mymap;
        for(char ch:s)
            mymap[ch]++;
        int maxFreq=0;
        for(auto it:mymap)
            maxFreq=max(maxFreq,it.second);
        vector<vector<int>>bucket(maxFreq+1);
        for(auto it:mymap){
            bucket[it.second].push_back(it.first);
        }
        string res="";
        for(int i=1;i<=maxFreq;i++){
            for(char ch:bucket[i])
                res.append(i,ch);
        }
        return res;
    }
};