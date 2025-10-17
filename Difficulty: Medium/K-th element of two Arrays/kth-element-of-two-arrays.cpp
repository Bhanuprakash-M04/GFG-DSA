class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int num:a)
            pq.push(num);
        for(int num:b)
            pq.push(num);
        while(k>1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};