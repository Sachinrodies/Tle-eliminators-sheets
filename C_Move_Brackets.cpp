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

using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    stack<ll> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        else
        {
            st.push(s[i]);
        }
    }

    int count_num = 0;
    if (!st.empty())
    {
        count_num = st.size() / 2;
    }
    cout << count_num << endl;
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
