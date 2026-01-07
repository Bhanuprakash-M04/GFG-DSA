// User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution {
  public:
    void generate(int open,int close,int n,vector<string>& ans,string curr){
        if(curr.length()==n){
            ans.push_back(curr);
            return ;
        }
        if(open<n/2){
            generate(open+1,close,n,ans,curr+'(');
        }
        if(close<open){
            generate(open,close+1,n,ans,curr+')');
        }
    }
    vector<string> generateParentheses(int n) {
        vector<string>ans;
        generate(0,0,n,ans,"");
        return ans;
    }
};