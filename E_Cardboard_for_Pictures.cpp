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
#define P pair<ll, ll>

bool computeCost(ll mid,ll c,vector<ll> &a){
    ll cost=0;
    for(int i:a){
        cost+=1ll*(2*mid+i)*(2*mid+i);
        if(cost>c){
            break;
        }
    }
    return c-cost>=0;

}
   

    

void solve()
{
    int n;
    ll c;

    cin>>n>>c;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }


    

   

    ll start=1;
    ll end=1e9;
    
    ll ans=1;
    while(start<=end){
        ll mid=start+(end-start)/2;
        if(computeCost(mid,c,a)){
            ans=mid;
            start=mid+1;


        }
        else{
            end=mid-1;
        }
      

        
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
