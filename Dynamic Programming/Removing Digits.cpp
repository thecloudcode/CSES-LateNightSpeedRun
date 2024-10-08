#include<bits/stdc++.h>
using namespace std;

#define lol long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);



lol f(lol n) {
    if(n<0) return INT_MAX;
    if( n==0 ) return 0;
    lol nn = n;
    lol ans = INT_MAX;
    while( nn>0 ) {
        lol r = nn%10;
        if(r!=0) ans = min(ans, 1+f(n-r));
        nn/=10;
    }
    return ans;
}

void solve() {
    lol n; cin>>n;
    // cout<<f(n)<<endl;
    vector<lol>dp(n+1,0);
    for(lol i=1;i<=n;i++) {
        lol nn = i;
        lol ans = INT_MAX;
        while( nn>0 ) {
            lol r = nn%10;
            if(r!=0) ans = min(ans, 1+dp[i-r]);
            nn/=10;
        }
        dp[i] = ans;
    }
    cout<<dp[n]<<endl;
}

int main() {
    fast;
    solve();
}