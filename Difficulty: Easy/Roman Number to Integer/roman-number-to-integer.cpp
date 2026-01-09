class Solution {
  public:
    int romanToDecimal(string &s) {
        int val=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(i+1<n && s[i]=='I' && s[i+1]=='V'){
                val+=4;
                i++;
            }
            else if(i+1<n && s[i]=='I' && s[i+1]=='X'){
                val+=9;
                i++;
            }
            else if(s[i]=='I')
                val+=1;
            else if(s[i]=='V')
                val+=5;
            else if(i+1<n && s[i]=='X' && s[i+1]=='L'){
                val+=40;
                i++;
            }
            else if(i+1<n && s[i]=='X' && s[i+1]=='C'){
                val+=90;
                i++;
            }
            else if(s[i]=='X')
                val+=10;
            else if(s[i]=='L')
                val+=50;
            else if(i+1<n && s[i]=='C' && s[i+1]=='D'){
                val+=400;
                i++;
            }
            else if(i+1<n && s[i]=='C' && s[i+1]=='M'){
                val+=900;
                i++;
            }
            else if(s[i]=='C')
                val+=100;
            else if(s[i]=='D')
                val+=500;
            else
                val+=1000;
        }
        return val;
    }
};