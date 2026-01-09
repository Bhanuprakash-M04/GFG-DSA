// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        sort(arr.begin(),arr.end());
        string f=arr[0];
        string l=arr[arr.size()-1];
        int p1=0;
        int n=f.length();
        while(p1<n && f[p1]==l[p1]){
                p1++;
        }
        return f.substr(0,p1);
    }
};