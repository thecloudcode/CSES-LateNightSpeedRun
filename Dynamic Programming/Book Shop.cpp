// #include<bits/stdc++.h>
// using namespace std;
//
// #define lol int
//
// lol f(lol i, lol k, vector<lol>x, vector<lol>xx) {
//     if(i<0) return 0;
//     lol notpick = f(i-1,k,x,xx);
//     lol pick = 0;
//     if(k-x[i]>=0) pick = xx[i] + f(i-1, k-x[i], x, xx);
//     return max(pick, notpick);
// }
//
// void solve() {
//     lol n, k; cin>>n>>k;
//     vector<lol>x(n); for(lol i=0;i<n;i++) cin>>x[i];
//     vector<lol>xx(n); for(lol i=0;i<n;i++) cin>>xx[i];
//
//     vector<vector<lol>>dp(n+1, vector<lol>(k+1, 0));
//     for(lol i=1;i<=n;i++) {
//         for(lol j=0;j<=k;j++) {
//             lol notpick = dp[i-1][j];
//             lol pick = 0;
//             if(j-x[i-1]>=0) pick = xx[i-1] + dp[i-1][j-x[i-1]];
//             dp[i][j] = max(pick, notpick);
//         }
//     }
//     cout<<dp[n][k]<<endl;
// }
//
// int main() {
//     solve();
// }