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
    cin>>n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum=(1<<30)-1;
    for(int i=0;i<n;i++){
        if(a[i]!=i){
            sum &= a[i];
        }
    }
    cout<<sum<<"\n";
   

    
    
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
