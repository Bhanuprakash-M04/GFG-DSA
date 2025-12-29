// User function Template for C++

//Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        sort(bt.begin(),bt.end());
        long long t=0;
        long long wait_time=0;
        int n=bt.size();
        for(int num:bt){
            wait_time+=t;
            t+=num;
        }
        return (wait_time/n);
    }
};