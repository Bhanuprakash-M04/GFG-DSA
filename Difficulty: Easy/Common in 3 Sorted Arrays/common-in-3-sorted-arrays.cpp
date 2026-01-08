class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        unordered_set<int>myset;
        vector<int>ans;
        int n=arr1.size();
        int m=arr2.size();
        int l=arr3.size();
        int p1=0,p2=0,p3=0;
        while(p1<n && p2<m && p3<l){
            if(arr1[p1]<=arr2[p2] && arr1[p1]<arr3[p3])
                p1++;
            else if(arr2[p2]<arr1[p1] && arr2[p2]<=arr3[p3])
                p2++;
            else if(arr3[p3]<arr2[p2] && arr1[p1]>=arr3[p3])
                p3++;
            else if(arr1[p1]==arr2[p2] && arr2[p2]==arr3[p3]){
                myset.insert(arr1[p1]);
                p1++;
                p2++;
                p3++;
            }
        }
        for(auto it:myset)
            ans.push_back(it);
        sort(ans.begin(),ans.end());
        return ans;
    }
};