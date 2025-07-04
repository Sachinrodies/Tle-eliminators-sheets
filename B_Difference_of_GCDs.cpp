#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <unordered_map>
#include <numeric>
#include <climits>
#include <map>
#include <unordered_set>

using namespace std;

#define ll long long


void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;

    vector<ll> ans;
    ans.reserve(n);

    for (ll i = 1; i <= n; ++i)
    {
        /*  ---- CORE FIX ----
            Pick the smallest multiple of i that is ≥ l.
            This guarantees gcd(i, a[i]) = i, hence all gcds are distinct.
        */
        ll k  = (l + i - 1) / i;   // ceiling(l / i)
        ll val = k * i;

        if (val > r) {             // no valid multiple in [l, r]
            cout << "NO\n";
            return;
        }
        ans.push_back(val);
    }

    cout << "YES\n";
    for (ll v : ans) cout << v << ' ';
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }

    return 0;
}
