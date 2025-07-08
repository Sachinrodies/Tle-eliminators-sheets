#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    if (n == 2) {
        if (a[0] == a[1]) {
            cout << 0 << '\n';
            return;
        }
        else if (a[0] % a[1] == 0 || a[1] % a[0] == 0) {
            cout << max(a[0], a[1]) << '\n';
            return;
        }
        else {
            cout << a[0] << '\n'; // Any non-common divisor works
            return;
        }
    }

    ll even_gcd = a[0];
    for (int i = 2; i < n; i += 2)
        even_gcd = gcd(even_gcd, a[i]);

    ll odd_gcd = a[1];
    for (int i = 3; i < n; i += 2)
        odd_gcd = gcd(odd_gcd, a[i]);

    bool even_valid = true;
    for (int i = 1; i < n; i += 2) {
        if (a[i] % even_gcd == 0) {
            even_valid = false;
            break;
        }
    }

    if (even_valid) {
        cout << even_gcd << '\n';
        return;
    }

    bool odd_valid = true;
    for (int i = 0; i < n; i += 2) {
        if (a[i] % odd_gcd == 0) {
            odd_valid = false;
            break;
        }
    }

    if (odd_valid) {
        cout << odd_gcd << '\n';
        return;
    }

    cout << 0 << '\n'; // No valid d
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
