class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        unordered_map<char,int>mymap;
        int n=s1.length();
        int m=s2.length();
        for(char ch:s1){
            mymap[ch]++;
        }
        for(char ch:s2){
            mymap[ch]--;
            if(mymap[ch]==0)
                mymap.erase(ch);
        }
        return (mymap.size()==0);
    }
};