class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        vector<int>ans;
        int cnt1=0,cnt2=0;
        int ele1=0,ele2=0;
        for(int num:arr){
            if(cnt1==0 && num!=ele2){
                cnt1=1;
                ele1=num;
            }
            else if(cnt2==0 && num!=ele1){
                cnt2=1;
                ele2=num;
            }
            else if(num==ele1)
                cnt1++;
            else if(num==ele2)
                cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;
        for(int num:arr){
            if(num==ele1)
                cnt1++;
            if(num==ele2)
                cnt2++;
        }
        int n=arr.size();
        if(cnt1>n/3)
            ans.push_back(ele1);
        if(cnt2>n/3)
            ans.push_back(ele2);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};