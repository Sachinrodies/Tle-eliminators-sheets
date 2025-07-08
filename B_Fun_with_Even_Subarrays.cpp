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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans=0;
    ll i=n-1;
    while(i>=0 && a[i]==a[n-1]){
        

            i--;
        
    }
    if(i==-1){
        cout<<0<<"\n";
        return;
    }

    while(i>=0){
        i-=n-i-1;
        ans++;
        while(i>=0 && a[i]==a[n-1]){
            i--;
        }
        
    }
    cout<<ans << "\n";
   

   


    
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
