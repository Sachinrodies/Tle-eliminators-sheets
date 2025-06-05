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
   int n,k;
   cin >> n >> k;
    string s;
    cin>>s;
    vector<int>prefixSum(n+1,0);
    for(int i=0;i<n;i++){
        prefixSum[i+1] = prefixSum[i] + (s[i] == 'W');
    }
    int ans = INT_MAX;
    for(int i=0;i<=n-k;i++){
        int count=prefixSum[i+k]-prefixSum[i];
        ans = min(ans, count);
    }
    cout<<ans << endl;
    


    
    
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