#include <bits/stdc++.h>
 
using namespace std;
 
using ull = unsigned long long;
 
const ull MOD = 998244353;
 
void solve() {
    ull a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
 
    a %= MOD;
    b %= MOD;
    c %= MOD;
    d %= MOD;
    e %= MOD;
    f %= MOD;
    
    ull x = (a * b) % MOD;
    x = (x * c) % MOD;  
 
    ull y = (d * e) % MOD;
    y = (y * f) % MOD;
 
    cout << (x - y + MOD) % MOD;
}
 
int main() {
    solve();
    return 0;
}
