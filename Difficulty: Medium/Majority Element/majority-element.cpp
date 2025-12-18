class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int cnt=0;
        int ele=0;
        for(int num:arr){
            if(cnt==0){
                cnt=1;
                ele=num;
            }
            else if(num==ele)
                cnt++;
            else
                cnt--;
        }
        cnt=0;
        for(int num:arr){
            if(num==ele)    
                cnt++;
        }
        if(cnt>arr.size()/2)
            return ele;
        return -1;
        
    }
};