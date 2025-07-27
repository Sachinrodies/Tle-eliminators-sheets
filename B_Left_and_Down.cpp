#include <iostream>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

ll ceil_div(ll x, ll y) {
    return (x + y - 1) / y;
}

void solve() {
    ll a, b, k;
    cin >> a >> b >> k;

    ll steps = ceil_div(max(a, b), k);
    ll result = (gcd(a, b) >= steps) ? 1 : 2;

    cout << result << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();

    }
    
}
