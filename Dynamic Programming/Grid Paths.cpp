// #include<bits/stdc++.h>
// using namespace std;
//
// #define lol long long int
// #define MOD 1000000007
//
// lol add(lol a, lol b, lol m) {
//     a %= m; b %= m;
//     return (((a + b) %m + m ) %m );
// }
//
// lol f(lol i, lol j, vector<string>x) {
//     if(i<0 or j<0) return 0;
//     if(x[i][j] == '*') return 0;
//     if(i==0 and j==0) return 1;
//     return f(i-1,j,x) + f(i,j-1,x);
// }
//
// void solve() {
//     lol n; cin>>n;
//     vector<string>x;
//     vector<vector<lol>>dp(n+1, vector<lol>(n+1, 0));
//     for(lol i=0;i<n;i++) {
//         string xx; cin>>xx;
//         x.push_back(xx);
//     }
//     dp[1][1] = 1;
//     for(lol i=1;i<=n;i++) {
//         for(lol j=1;j<=n;j++) {
//             if(x[i-1][j-1]=='*') dp[i][j] = 0;
//             else dp[i][j] += ( dp[i-1][j] + dp[i][j-1] )%1000000007;
//         }
//     }
//     cout<<dp[n][n]<<endl;
//     // cout<<f(n-1,n-1,x)<<endl;
// }
//
// int main() {
//     solve();
// }