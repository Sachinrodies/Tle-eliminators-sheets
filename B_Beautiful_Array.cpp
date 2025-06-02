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

using namespace std;

#define ll long long
#define P pair<ll, ll>

void   solve()
{
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    ll min_sum = k * b;
    ll max_sum = (k * b) + (n * (k - 1));
    if (s >= min_sum && s <= max_sum)
    {
        vector<ll> a(n, 0);
        a[0] = k * b;
        ll left = s - k * b;
        for (int i = 0; i < n && left > 0; i++)
        {
            ll add = min(left, k - 1);
            a[i] += add;
            left -= add;
        }
        for (ll i : a)
        {
            cout << i << " ";
        }
        cout << "\n";
        
    }
    else
    {
        cout << "-1" << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while (t--)
    {
        solve();
    }

   

    return 0;
}