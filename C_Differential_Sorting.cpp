#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include<tuple>
#include <queue>
#include <set>
#include <unordered_map>
#include <map>
#include <iostream>

using namespace std;

#define ll long long
bool comp(int a, int b) {
    return a > b;
}



void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (is_sorted(a.begin(), a.end())) {
        cout << 0 << endl;
        return;
    }
    if (a[n - 2] > a[n - 1]) {
        cout << -1 << endl;
        return;
    }

    // Apply operation: a[i] = a[i+1] - a[n-1]
    // Going from right to left
    vector<tuple<int, int, int>> ops;
    for (int i = n - 3; i >= 0; i--) {
        if (a[i] > a[i + 1]) {
            a[i] = a[i + 1] - a[n - 1];
            ops.emplace_back(i + 1, i + 2, n); // 1-based indexing
        }
    }

    // Final check
    if (!is_sorted(a.begin(), a.end())) {
        cout << -1 << endl;
        return;
    }

    cout << ops.size() << endl;
    for (auto &[x, y, z] : ops) {
        cout << x << " " << y << " " << z << endl;
    }
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }

   
}
