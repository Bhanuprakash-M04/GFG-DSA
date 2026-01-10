class Solution {
  public:
    string smallestWindow(string &s, string &t) {
        unordered_map<char,int>mymap;
        int n=s.length();
        int m=t.length();
        for(int i=0;i<m;i++)
            mymap[t[i]]++;
        int cnt=0;
        int left=0;
        int minLen=INT_MAX;
        int st_ind=-1;
        for(int right=0;right<n;right++){
            if(mymap[s[right]]>0)
                cnt++;
            mymap[s[right]]--;
            while(cnt==m){
                if(minLen>(right-left+1)){
                    minLen=right-left+1;
                    st_ind=left;
                }
                mymap[s[left]]++;
                if(mymap[s[left]]>0)
                    cnt--;
                left++;
            }
        }
        if(st_ind==-1)
            return "";
        return s.substr(st_ind,minLen);
    }
};