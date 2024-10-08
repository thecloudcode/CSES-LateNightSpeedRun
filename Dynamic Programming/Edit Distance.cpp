#include<bits/stdc++.h>
using namespace std;

#define lol long long int
string a, b;

lol f(lol i, lol j) {
    if(i<0) return j+1;
    if(j<0) return i+1;
    if(a[i]==b[j]) {
        return f(i-1, j-1);
    }else {
        return 1+min({f(i-1,j-1),f(i-1,j),f(i,j-1)});
    }
}

void solve() {
    cin>>a>>b;
    lol n = a.size(); lol m = b.size();
    // cout<<f(n-1,m-1)<<endl;
    vector<vector<lol>>dp(n+1, vector<lol>(m+1,0));
    for(lol i=0;i<=n;i++) dp[i][0] = i;
    for(lol j=0;j<=m;j++) dp[0][j] = j;
    for(lol i=1;i<=n;i++) {
        for(lol j=1;j<=m;j++) {
            if(a[i-1]!=b[j-1]) {
                dp[i][j] = 1+min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]});
            }else {
                dp[i][j] = dp[i-1][j-1];
            }
        }
    }
    cout<<dp[n][m]<<endl;
}

int main() {
    solve();
}