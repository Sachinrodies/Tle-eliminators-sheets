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
    int w,h;
    cin >> w >> h;
     int k,l,m,n;
    
    cin>>k;
    vector<ll> a(k);
    for(int i=0;i<k;i++){
        cin>>a[i];
    }
    cin>>l;
    vector<ll> b(l);
    for(int i=0;i<l;i++){
        cin>>b[i];
    }
    cin>>m;
    vector<ll> c(m);
    for(int i=0;i<m;i++){
        cin>>c[i];
    }
    cin>>n;
    vector<ll> d(n);
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    ll max_val=LLONG_MIN;
    if(abs(a[0]-a[k-1])*h*1ll>max_val){
        max_val=abs(a[0]-a[k-1])*h;
    }
    if(abs(b[0]-b[l-1])*h*1ll>max_val){
        max_val=abs(b[0]-b[l-1])*h;
    }
    if(abs(c[0]-c[m-1])*w*1ll>max_val){
        max_val=abs(c[0]-c[m-1])*w;
    }
    if(abs(d[0]-d[n-1])*w*1ll>max_val){
        max_val=abs(d[0]-d[n-1])*w;
    }
    cout << max_val << endl;

   
     

    
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
