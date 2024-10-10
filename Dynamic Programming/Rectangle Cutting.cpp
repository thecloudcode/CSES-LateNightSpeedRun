// #include<bits/stdc++.h>
// using namespace std;
//
// #define lol long long int
//
// lol f(lol a, lol b) {
//     if(a<b) return 1+f(a,b-a);
//     else if(b<a) return 1+f(a-b, b);
//     else return 0;
// }
//
// void solve() {
//     lol a, b; cin>>a>>b;
//     // cout<<f(a,b)<<endl;
//     vector<vector<lol>>dp(a+1, vector<lol>(b+1,0));
//     for(lol i=1;i<=a;i++) dp[i][1] = i-1;
//     for(lol j=1;j<=b;j++) dp[1][j] = j-1;
//     for(lol i=1;i<=a;i++) {
//         for(lol j=1;j<=b;j++) {
//             // if(i<j) dp[i][j] = 1+dp[i][j-i];
//             // else if(j<i) dp[i][j] = 1+dp[i-j][j];
//             // else dp[i][j] = 0;
//             lol ans = INT_MAX;
//             for(lol k=1;k<a;k++) {
//                 ans=min(ans,1+dp[k][j]+dp[i-k][b]);
//             }
//             for(lol k=1;k<b;k++) {
//                 ans=min(ans,1+dp[a][k]+dp[a][b-k]);
//             }
//             dp[i][j] = ans;
//         }
//     }
//     cout<<dp[a][b]<<endl;
// }
//
// int main() {
//     solve();
// }