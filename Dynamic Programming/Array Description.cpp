// #include<bits/stdc++.h>
// using namespace std;
//
// #define lol long long int
//
// lol f(lol prev, lol ind, lol n, lol m, vector<lol>x) {
//     // cout<<prev<<" "<<x[ind]<<endl;
//     if(ind==n) return 1;
//     if(prev==0) {
//         lol ans = 0;
//         for(lol i=1;i<=m;i++) {
//             ans += f(i, ind, n, m, x);
//         }
//         return ans;
//     }
//     if(abs(prev-x[ind])>1 and x[ind]!=0) return 0;
//     if(x[ind]==0) {
//         lol ans = 0;
//         for(lol i = min((lol)(1), (lol)(prev-1)); i<=m; i++) {
//             ans += f(i, ind+1, n, m, x);
//         }
//         return ans;
//     }else {
//         return f(x[ind], ind+1, n, m, x);
//     }
// }
//
// void solve() {
//     lol n, m; cin>>n>>m;
//     vector<lol>x(n); for(lol i=0;i<n;i++) cin>>x[i];
//     // cout<<f(x[0],1,n,m,x)<<endl;
//     vector<vector<lol>>dp(m+1, vector<lol>(n+1, 0));
//     for(lol i=0;i<=m;i++) dp[i][n] = 1;
//     for(lol prev=0;prev<=m;prev++) {
//         for(lol ind=n-1;ind>=0;ind--) {
//             if(prev==0) {
//                 lol ans = 0;
//                 for(lol i=1;i<=m;i++) {
//                     ans += dp[i][ind+1];
//                 }
//                 dp[prev][ind] = ans;
//             }
//         }
//     }
//
// }
//
// int main(){
//     solve();
// }