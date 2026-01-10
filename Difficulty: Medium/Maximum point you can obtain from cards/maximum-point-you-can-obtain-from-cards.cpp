class Solution {
  public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        int ans=0;
        int n=cardPoints.size();
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        ans=sum;
        int ind=n-1;
        for(int i=k-1;i>=0;i--){
            sum-=cardPoints[i];
            sum+=cardPoints[ind];
            ind-=1;
            ans=max(ans,sum);
        }
        return ans;
    }
};
