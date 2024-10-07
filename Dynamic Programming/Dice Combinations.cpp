#include<bits/stdc++.h>
using namespace std;

#define lol long long int
#define MOD 1e9+7

lol add(lol a, lol b, lol m) {
    a = a%m; b = b%m;
    return (((a+b)%m)+m)%m;
}

lol f(lol n) {
    if(n==0) return 1;
    lol ans = 0;
    for(lol i=1;i<=min(n, (lol)(6));i++) {
        ans += f(n-i);
    }
    return ans;
}

int main() {
    lol n; cin>>n;
    // cout<<f(n)<<endl;
    vector<lol>dp(n+1,0); dp[0] = 1;
    for(lol i=1;i<=n;i++) {
        for(lol j=1;j<=min((lol)(6), i); j++) {
            dp[i] = add(dp[i-j], dp[i], MOD);
        }
    }
    cout<<dp[n]<<endl;
}