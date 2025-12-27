class Solution {
  public:
    string minWindow(string& s1, string& s2) {
        int n=s1.length();
        int m=s2.length();
        int st_ind=-1;
        int minLen=INT_MAX;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[0]){
                int p1=i;
                int p2=0;
                while(p1<n && p2<m){
                    if(s1[p1]==s2[p2])
                        p2++;
                    p1++;
                }
                if(p2==m){
                    int end=p1-1;
                    p2=m-1;
                    while(p2>=0){
                        if(s1[end]==s2[p2])
                            p2--;
                        end--;
                    }
                    int start=end+1;
                    int len=p1-start;
                    if(len<minLen){
                        minLen=len;
                        st_ind=start;
                    }
                }
            }
        }
        return (st_ind==-1) ? "" : s1.substr(st_ind,minLen);
        
    }
};
