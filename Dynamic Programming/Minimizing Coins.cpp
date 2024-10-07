#include<bits/stdc++.h>
using namespace std;

#define lol long long int

lol f(lol s, vector<lol>x) {
    if(s<0) return INT_MAX;
    if(s==0) return 0;
    lol ans = INT_MAX;
    for(lol i: x) {
        ans = min(ans, 1+f(s-i, x));
    }
    return ans;
}

int main() {
    lol n, s; cin>>n>>s;
    vector<lol>x(n);
    for(lol i=0;i<n;i++) cin>>x[i];

    vector<lol>dp(s+1, INT_MAX); dp[0] = 0;
    for(lol i=1;i<=s;i++) {
        for(lol j: x) {
            if(i-j>=0) dp[i] = min(dp[i], 1 + dp[i-j]);
        }
    }
    dp[s] = dp[s]==INT_MAX?-1:dp[s];
    cout<<dp[s]<<endl;
}