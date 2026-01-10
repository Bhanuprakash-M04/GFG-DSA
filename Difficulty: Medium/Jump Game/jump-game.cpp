// User function Template for C++

class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool canReach(vector<int> &arr) {
        int max_ind=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(i>max_ind)
                return false;
            max_ind=max(max_ind,i+arr[i]);
        }
        return true;
    }
};