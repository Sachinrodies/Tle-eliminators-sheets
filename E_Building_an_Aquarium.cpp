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

bool computeCost(int mid,int h,vector<ll>&a){
    ll cost=0;
    for(int i:a){
        if(i<mid){
            cost+=(mid-i);
        }
    }
    return h-cost>=0;
}
void solve()
{
    ll n,h;
    cin>>n>>h;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int start=a[0];
    int end=a[n-1]+h;
    int ans=a[0];
    int mid=start+(end-start)/2;
    while(start<=end){
        if(computeCost(mid,h,a)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
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
