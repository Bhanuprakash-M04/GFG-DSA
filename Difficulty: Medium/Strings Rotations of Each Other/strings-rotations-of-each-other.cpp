class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        string main=s1+s1;
        int n=main.length();
        return main.find(s2)!=string::npos;
    }
};