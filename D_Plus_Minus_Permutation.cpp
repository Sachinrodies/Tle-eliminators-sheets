#include <iostream>
using namespace std;

#define ll long long
ll __gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;

    ll cnt_x = n / x;
    ll cnt_y = n / y;
    ll cnt_common = n / lcm(x, y);

    ll only_x = cnt_x - cnt_common;
    ll only_y = cnt_y - cnt_common;

    
    ll leftSum = (n + n - only_x + 1) * only_x / 2;

    // Assign lowest values to `only_y` → 1 to only_y
    ll rightSum = (only_y * (only_y + 1)) / 2;

    cout << leftSum - rightSum << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}
