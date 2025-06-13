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
#define P pair<ll, ll>




void solve()
{
   ll n;
   cin>>n;
    vector<ll> a(n);
    unordered_map<ll, ll> freq;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    if(freq.size()==n){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }



    
   
    


   
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
