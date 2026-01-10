class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    static bool comp(pair<int,int>& a,pair<int,int>& b){
        return a.second<b.second;
    }
    int maxMeetings(vector<int>& start, vector<int>& end) {
        vector<pair<int,int>>arr;
        int n=start.size();
        for(int i=0;i<n;i++){
            arr.push_back({start[i],end[i]});
        }
        sort(arr.begin(),arr.end(),comp);
        int cnt=0;
        int last=-1;
        for(int i=0;i<n;i++){
            int s=arr[i].first;
            if(s>last){
                cnt++;
                last=arr[i].second;
            }
        }
        return cnt;
    }
};