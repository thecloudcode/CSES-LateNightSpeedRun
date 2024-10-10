#include<bits/stdc++.h>
using namespace std;

#define lol long long int

vector<lol> trial_division(lol n) {
    vector<lol> factorization;
    for(lol divisor = 2; divisor * divisor <= n; divisor++) {
        while(n%divisor==0) {
            factorization.push_back(divisor);
            n/=divisor;
        }
    }
    if(n>1) {
        factorization.push_back(n);
    }
    return factorization;
}

int main() {
    lol n; cin>>n;
    vector<lol> factorization = trial_division(n);
    for(auto &i: factorization) {
        cout<<i<<endl;
    }
}