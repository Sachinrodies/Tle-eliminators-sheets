#include <iostream>
#include <vector>
using namespace std;

#define ll long long


vector<int> primes = {2, 3, 5, 7};


ll count_good(ll x) {
    int n = primes.size();
    ll res = 0;

   
    for (int mask = 1; mask < (1 << n); ++mask) {
        ll lcm = 1;
        int bits = 0;
        for (int i = 0; i < n; ++i) {
            if (mask >> i & 1) {
                lcm *= primes[i];
                bits++;
            }
        }
        if (bits % 2) res += x / lcm;
        else res -= x / lcm;
    }

    return x - res; 
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        cout << count_good(r) - count_good(l - 1) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
