// #include<bits/stdc++.h>
// using namespace std;
//
// #define lol long long int
// set<lol>ans;
//
// void f(lol i, lol s, vector<lol>x) {
//     if(i==x.size()) { if(s!=0) ans.insert(s); return; }
//     f(i+1, s+x[i], x);
//     f(i+1, s, x);
// }
//
// void solve() {
//     lol n; cin>>n;
//     vector<lol>x(n);
//     for(lol i=0;i<n;i++) cin>>x[i];
//
//     // f(0, 0, x);
//     // sort(ans.begin(), ans.end());
//     vector<vector<lol>>dp(n+1, vector<lol>(1000001,0));
//     for(lol i=0;i<n;i++) {
//
//     }
//
//     cout<<ans.size()<<endl;
//     for(lol i: ans) cout<<i<<" "; cout<<endl;
// }
//
// int main() {
//     solve();
// }