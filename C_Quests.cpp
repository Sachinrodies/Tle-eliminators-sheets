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
#define P pair<char, int>

// void generateStrings(string& s, unordered_set<string>& st, unordered_set<string>& visited) {
//     if (s.empty()) return;
//     if (visited.count(s)) return;

//     visited.insert(s);
//     st.insert(s);

//     // Operation 1: remove first character
//     if (s.size() >= 1) {
//         string s1 = s.substr(1); // unavoidable small copy
//         generateStrings(s1, st, visited);
//     }

//     // Operation 2: remove second character
//     if (s.size() >= 2) {
//         string s2 = s;
//         s2.erase(s2.begin() + 1); // small copy, only when size >= 2
//         generateStrings(s2, st, visited);
//     }
// }

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int total_exp = 0;
    int ans=0;
    int maxi=0;
    for(int i=0;i<min(n,k);i++){
        total_exp+=a[i];
        maxi=max(maxi,b[i]);
        ans=max(ans,total_exp+(k-1-i)*maxi);
    }
    cout<<ans<<endl;
   
   
    
   
    
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
