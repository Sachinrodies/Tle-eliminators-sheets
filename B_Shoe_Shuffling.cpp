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
#include<map>

using namespace std;

#define ll long long
#define P pair<ll, ll>

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    bool flag = false;
    for (auto it : mp)
    {
        if (it.second == 1)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << -1 << endl;
        return;
    }

    vector<ll> student(n);
    for (int i = 0; i < n; i++)
    {
        student[i] = i + 1;
    }
    int l = 0, r = 0;
    while (r < n)
    {
        if (a[l] == a[r])
        {
            r++;
        }
        else
        {
            rotate(student.begin() + l, student.begin() + l + 1, student.begin() + r);
            l = r;
        }
    }
    rotate(student.begin() + l, student.begin() + l + 1, student.begin() + r);
    for (ll i : student)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}