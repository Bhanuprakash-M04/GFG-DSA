// User function Template for C++

class Solution {
  public:
    int findXOR(int l, int r) {
        return value(l-1) ^ value(r);
    }
    int value(int n){
        if(n%4==1)
            return 1;
        if(n%4==2)
            return n+1;
        if(n%4==3)
            return 0;
        return n;
    }
};