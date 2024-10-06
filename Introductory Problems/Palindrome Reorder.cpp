// /* Badal Prasad Singh -------------------------------------------------------------------------------------*/
//
// #pragma GCC optimize("O3,unroll-loops")
// #include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace std;
// using namespace chrono;
// using namespace __gnu_pbds;
//
// /*-----------------------------------My Personal Definitions-----------------------------------------------*/
// template<class T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// // "The value at 3rd index : *p.find_by_order(3)
// // "The index of number 6 : p.order_of_key(6)
// // Whenever searching use {VAL, 0}       for lower_bound
// //                        {VAL, IDX}     for find
// //                        {VAL, INT_MAX} for upper_bound
// // p.erase(p.lower_bound({ 2, 0 }));
// #define fast  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define yes cout<<"YES"<<endl;
// #define lol long long int
// #define ulol unsigned long long;
// #define dlol long double
// #define no cout<<"NO"<<endl;
// #define noo cout<<-1<<endl;
// #define anz cout<<ans<<endl;
// #define MOD 1000000007
// #define INF 1e18
// #define nline "\n"
// #define pb push_back
// #define ppb pop_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define PI 3.141592653589793238462
// #define set_bits(x) __builtin_popcountll(x)
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// /*-------------------------------------------Clock-------------------------------------------------------*/
//
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//
// /*-----------------------------------My Personal Functions-----------------------------------------------*/
// lol gcd(lol a, lol b) {
//     if (b > a) { return gcd(b, a); }
//     if (b == 0) { return a; }
//     return gcd(b, a % b);
// }
//
// lol expo(lol a, lol b, lol mod) {
//     lol res = 1;
//     while (b > 0) {
//         if (b & 1)res = (res * a) % mod;
//         a = (a * a) % mod;
//         b = b >> 1;
//     }
//     return res;
// }
//
// lol mminvprime(lol a, lol b) { return expo(a, b - 2, b); }
// lol add(lol a, lol b, lol m) {
//     a = a % m;
//     b = b % m;
//     return (((a + b) % m) + m) % m;
// }
//
// lol mul(lol a, lol b, lol m) {
//     a = a % m;
//     b = b % m;
//     return (((a * b) % m) + m) % m;
// }
//
// lol sub(lol a, lol b, lol m) {
//     a = a % m;
//     b = b % m;
//     return (((a - b) % m) + m) % m;
// }
//
// lol div(lol a, lol b, lol m) {
//     a = a % m;
//     b = b % m;
//     return (mul(a, mminvprime(b, m), m) + m) % m;
// } //only for prime m
// lol combination(lol n, lol r, lol m, lol *fact, lol *ifact) {
//     lol val1 = fact[n];
//     lol val2 = ifact[n - r];
//     lol val3 = ifact[r];
//     return (((val1 * val2) % m) * val3) % m;
// }
//
// vector<lol> sieve(int n) {
//     int *arr = new int[n + 1]();
//     vector<lol> vect;
//     for (int i = 2; i <= n; i++)
//         if (arr[i] == 0) {
//             vect.push_back(i);
//             for (int j = 2 * i; j <= n; j += i)arr[j] = 1;
//         }
//     return vect;
// }
//
// lol phin(lol n) {
//     lol number = n;
//     if (n % 2 == 0) {
//         number /= 2;
//         while (n % 2 == 0) n /= 2;
//     }
//     for (lol i = 3; i <= sqrt(n); i += 2) {
//         if (n % i == 0) {
//             while (n % i == 0)n /= i;
//             number = (number / i * (i - 1));
//         }
//     }
//     if (n > 1)number = (number / n * (n - 1));
//     return number;
// } //O(sqrt(N))
// lol getRandomNumber(lol l, lol r) { return uniform_int_distribution<lol>(l, r)(rng); } // line 3
// /*--------------------------------------------Solve------------------------------------------------------*/
//
// void solve() {
//     string x; cin>>x;
//     unordered_map<char,lol>map;
//     for(char i: x) map[i]++;
//     string a = ""; string b = ""; bool flag = true; string extra = "";
//     for(auto &i: map) {
//         if(i.second%2==0) {
//             a.append(i.second / 2, i.first);
//             b.insert(0, i.second / 2, i.first);
//         }else {
//             if(flag) {
//                 flag = false;
//                 extra.append(i.second, i.first);
//             }else {
//                 cout<<"NO SOLUTION"<<endl;
//                 return;
//             }
//         }
//     }
//     cout<<a<<extra<<b<<endl;
// }
//
// int main() {
//     fast;
//     auto start1 = high_resolution_clock::now();
//     lol t = 1;
//     // cin >> t;
//     while (t--) solve();
//     auto stop1 = high_resolution_clock::now();
//     auto duration = duration_cast<microseconds>(stop1 - start1);
//
// #ifdef _the_cloud_
//     cout << "Time: " << duration.count() / 1000 << " ms" << endl;
// #endif
// }
