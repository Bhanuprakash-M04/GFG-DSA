class Solution {
  public:
    vector<int> twoOddNum(vector<int>& arr) {
        int arr_xor=0;
        for(int num:arr){
            arr_xor^=num;
        }
        int y=(((arr_xor)&(arr_xor-1))^(arr_xor));
        int b1=0;
        int b2=0;
        for(int num:arr){
            if((num&y)==0)
                b1=b1^num;
            else
                b2=b2^num;
        }
        if(b1<b2)
            swap(b1,b2);
        return {b1,b2};
    }
};