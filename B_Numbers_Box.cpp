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
   ll n,m;
   cin>>n>>m;
  
   vector<vector<ll>> a(n, vector<ll>(m));
  
   ll sum=0;
   ll count_neg=0;
   ll min_val=LLONG_MAX;
    for(ll i=0; i<n; i++) {
         for(ll j=0; j<m; j++) {
              cin>>a[i][j];
              if(a[i][j]<=0) {
                  count_neg++;
              }
              sum+=abs(a[i][j]);
             min_val=min(min_val,abs(a[i][j]));
              
         }
    }
    if(count_neg%2==0) {
         cout<<sum<<endl;   
    }
    else{
        cout<<sum-2*min_val<<endl;

        
       
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
