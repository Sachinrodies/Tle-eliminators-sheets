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
ll MOD=1e9+7;


void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    ll ans=1;
    for(int i=0;i<n;i++){
        int index=upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        int count=n-index;
        ans=ans*max((ll)(count-i), 0LL)% MOD;
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
