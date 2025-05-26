#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define ll long long

void solve() {
    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    ll totalSum = 0;
    ll maxBeauty = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        totalSum += a[i];
        maxBeauty += (a[i]+x-1) / x; 
       
    }

    ll minBeauty = (totalSum + x - 1) / x; // Equivalent to ceil(totalSum / x)

    cout << minBeauty << " " << maxBeauty << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
