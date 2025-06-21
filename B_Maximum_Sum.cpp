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


void solve()
{
    ll n,k;
    cin>>n >> k;
    vector<ll> a(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
       
    }
    sort(a.begin(), a.end());
    if(k==0)
    {
        cout<<0<<endl;
        return;
    }
    vector<ll>prefixSum(n);
    prefixSum[0]=a[0];
    for(int i=1;i<n;i++)
    {
        prefixSum[i]=prefixSum[i-1]+a[i];
    }

    ll ans=0;

    for(int leftOp=0;leftOp<=k ;leftOp++){
       int second=k-leftOp;
       int leftIndex=2*leftOp;
         int rightIndex=n-1-second;
         ans=max(ans,prefixSum[rightIndex] - (leftIndex > 0 ? prefixSum[leftIndex - 1] : 0));

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
