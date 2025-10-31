class Solution {
  public:
    bool isEven(int n) {
        // code here
        return (n&1)%2==0 ? true : false;
    }
};