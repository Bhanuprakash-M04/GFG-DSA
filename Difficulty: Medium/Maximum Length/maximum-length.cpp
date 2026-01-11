// User function Template for C++

class Solution {
  public:
    int solve(int a, int b, int c) {
        int maxi=max(a,max(b,c));
        int total=a+b+c;
        int rem=total-maxi;
        if(maxi>2*(rem+1))
            return -1;
        return total;
        
    }
};