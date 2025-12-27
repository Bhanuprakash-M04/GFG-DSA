// User function template for C++

class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<n;i++){
            pq.push({arr[i],i});
        }
        int cnt=0;
        while(!pq.empty()){
            int val=abs(pq.top().second-cnt);
            if(val>k)
                return "No";
            pq.pop();
            cnt++;
        }
        return "Yes";
    }
};