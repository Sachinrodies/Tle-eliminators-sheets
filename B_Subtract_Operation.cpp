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
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    set<ll> s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }

    for(int i=0;i<n;i++){
        if(s.find(a[i]-k)!=s.end()){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
   

   


    
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
