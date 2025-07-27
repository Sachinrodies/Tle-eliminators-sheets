#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <set>
#include <unordered_map>
#include <map>
#include <iostream>

using namespace std;

#define ll long long
bool check(ll val,int idx,ll tv,int mid){
    if(val+(1ll*(idx+1)*(mid-1))<=tv){
        return true;
    }
    return false;
}

int bnSearch(ll val,int idx,ll total){
    int start=1,end=1e9;
    int mid=start+(end-start)/2;
    int ans=0;

    while(start<=end){
        if(check(val,idx,total,mid)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}


void solve()
{
    int n,x;
    cin>>n>>x;
    vector<ll>cost(n);
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }

    sort(cost.begin(),cost.end());

    vector<ll>pref(n);
    pref[0]=cost[0];
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+cost[i];
    }

    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=bnSearch(pref[i],i,x);
    }

    cout<<ans<<endl;

  
  





 
 

 


}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }

   
}
