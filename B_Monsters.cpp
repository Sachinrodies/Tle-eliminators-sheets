#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <string>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

#define ll long long
#define P pair<ll, ll>

void solve()
{int n, k;
    cin >> n >> k;
    vector<pair<int, int>> rem_index; 

    for (int i = 0; i < n; ++i) {
        int ai;
        cin >> ai;
        int val = ai % k;
        if (val == 0) val = k; 
        rem_index.push_back({val, -i});
    }

    
    sort(rem_index.begin(), rem_index.end(), greater<>());

    for (auto &[_, neg_idx] : rem_index) {
        cout << -neg_idx + 1 << " "; 
    }
    cout << "\n";
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