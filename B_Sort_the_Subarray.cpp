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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    if (is_sorted(a.begin(), a.end()))
    {
        cout << 1 << " " << 1 << endl;
    }
    else if (is_sorted(b.begin(), b.end()))
    {
        cout << 1 << " " << n << endl;
    }
    else
    {
        ll l = 0, r = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                l = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i])
            {
                r = i;
                break;
            }
        }
        while (l > 0 && b[l - 1] <= b[l]) {
        l--;
    }

    
    while (r + 1 < n && b[r] <= b[r + 1]) {
        r++;
    }

    cout << l + 1 << " " << r + 1 << endl;


    }
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
