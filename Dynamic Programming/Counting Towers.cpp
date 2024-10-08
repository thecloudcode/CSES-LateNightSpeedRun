// #include<bits/stdc++.h>
// using namespace std;
//
// #define lol long long int
// const lol MOD = 1000000007;
// #define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//
//
// lol add(lol a, lol b) {
//     a %= MOD; b %= MOD;
//     return (((a+b)%MOD)+MOD)%MOD;
// }
//
// lol mul(lol a, lol b) {
//     a %= MOD; b %= MOD;
//     return (((a*b)%MOD)+MOD)%MOD;
// }
//
// lol f(lol i, lol j, lol n) {
//     if(i==1) {
//         return 1;
//         // if(j==1) return 2;
//         // if(j==0) return 5;
//     }else {
//         if(j==0) return 4*f(i-1,0,n) + f(i-1,1,n);
//         if(j==1) return 2*f(i-1,1,n) + f(i-1,0,n);
//     }
// }
//
// lol n = 1e6;
// vector<vector<lol>>dp(n+1,vector<lol>(2,0));
//
// void solve() {
//     fast;
//     lol n; cin>>n;
//     cout<<add(dp[n][0],dp[n][1])<<endl;
// }
//
// int main() {
//     lol t; cin>>t;
//     dp[1][0] = dp[1][1] = 1;
//     for(lol i=2;i<=n;i++) {
//         for(lol j=0;j<=1;j++) {
//             if(j==0) dp[i][j] = add(mul(4,dp[i-1][0]),dp[i-1][1]);
//             if(j==1) dp[i][j] = add(mul(2,dp[i-1][1]),dp[i-1][0]);
//         }
//     }
//     while(t--) solve();
// }