class Solution {
  public:
    double minMaxDist(vector<int> &stations, int k) {
        // Code here
        priority_queue<pair<double,int>>pq;
        int n=stations.size();
        if(n<=1)
            return 0.00;
        vector<int>check(n-1,0);
        for(int i=0;i<n-1;i++){
            pq.push({stations[i+1]-stations[i],i});
        }
        while(k--){
            auto it=pq.top();
            pq.pop();
            int ind=it.second;
            check[ind]++;
            double dist_diff=stations[ind+1]-stations[ind];
            double div=check[ind]+1;
            double val=(double)dist_diff/(double)div;
            pq.push({val,ind});
        }
        return pq.top().first;
    }
};