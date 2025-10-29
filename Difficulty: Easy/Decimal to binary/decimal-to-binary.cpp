// User function Template for C++

void toBinary(int n) {
    // your code here
    string ans="";
    while(n){
        int rem=n%2;
        ans+=to_string(rem);
        n=n/2;
    }
    reverse(ans.begin(),ans.end());
    cout << ans;
}