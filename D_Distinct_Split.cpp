#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <string>
#include <map>
#include<set>
#include <queue>
#include <algorithm>
#include <unordered_map>

using namespace std;

#define ll long long
#define P pair<ll, ll>


void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> prefix(n, 0), suffix(n, 0);
    set<char> seen;

    
    for (int i = 0; i < n; i++) {
        seen.insert(s[i]);
        prefix[i] = seen.size();
    }

    seen.clear();

 
    for (int i = n - 1; i >= 0; i--) {
        seen.insert(s[i]);
        suffix[i] = seen.size();
    }

    
    int max_len = 0;
    for (int i = 0; i < n - 1; i++) {
        max_len = max(max_len, prefix[i] + suffix[i + 1]);
    }

    cout << max_len << "\n";

  
   
    

    

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