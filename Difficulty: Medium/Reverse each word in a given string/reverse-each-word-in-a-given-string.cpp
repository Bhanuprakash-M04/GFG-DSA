class Solution {
  public:
    string reverseWords(string &s) {
        vector<string>ans;
        stringstream ss(s);
        string word;
        while(ss >> word)
            ans.push_back(word);
        string res="";
        for(int i=0;i<ans.size();i++){
            string str=ans[i];
            reverse(str.begin(),str.end());
            res+=str;
            if(i!=ans.size()-1)
                res+=" ";
        }
        return res;
    }
};