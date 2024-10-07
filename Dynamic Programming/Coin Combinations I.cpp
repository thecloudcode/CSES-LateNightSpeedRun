#include<bits/stdc++.h>
using namespace std;

#define lol int
#define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
lol MOD = 1e9+7;

lol add(lol a, lol b, lol m) {
    a %= m;
    b %= m;
    return ((( a + b ) % m) + m) %m;
}

lol f(lol s, vector<lol>x) {
    if(s==0) return 1;
    lol ans = 0;
    for(lol i: x) {
        if(i<=s) {
            ans += f(s-i, x);
        }
    }
    return ans;
}

int main() {
    fast;
    lol n, s; cin>>n>>s;
    vector<lol>x(n);
    for(lol i=0;i<n;i++) cin>>x[i];
    vector<lol>dp(s+1,0); dp[0] = 1;
    for(lol i=1;i<=s;i++) {
        for(lol j: x) {
            if(i-j>=0) {
                // dp[i] = add(dp[i], dp[i-j], MOD); -- Getting TLE
                // dp[i] = (dp[i] + dp[i-j]) % MOD; -- Getting TLE
                dp[i] = (dp[i] + dp[i-j]) % 1000000007;
            }
        }
    }
    cout<<dp[s]<<endl;
    // cout<<f(s,x)<<endl;
}