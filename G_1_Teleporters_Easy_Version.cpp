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
  int n;
    ll c;
    cin >> n >> c;

    vector<ll> a(n);
    vector<ll> total_cost(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_cost[i] = a[i] + (i + 1); // total cost = teleport + walk
    }

    sort(total_cost.begin(), total_cost.end());

    ll count = 0, used = 0;
    for (int i = 0; i < n; ++i) {
        if (used + total_cost[i] <= c) {
            used += total_cost[i];
            count++;
        } else {
            break;
        }
    }

    cout << count << "\n";
    

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
