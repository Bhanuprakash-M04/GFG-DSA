class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n=val.size();
        vector<pair<double,pair<int,int>>>res(n);
        for(int i=0;i<n;i++){
            double ratio=(double)val[i]/wt[i];
            res[i]={ratio,{val[i],wt[i]}};
        }
        sort(res.begin(),res.end());
        reverse(res.begin(),res.end());
        for(int i=0;i<n;i++){
            val[i]=res[i].second.first;
            wt[i]=res[i].second.second;
        }
        double ans=0.0;
        for(int i=0;i<n;i++){
            if(capacity>=wt[i]){
                ans=ans+(double)val[i];
                capacity=capacity-wt[i];
            }
            else{
                double frac=(double)(((double)capacity/(double)wt[i])*(double)val[i]);
                ans=ans+frac;
                break;
            }
        }
        return ans;
    }
};
