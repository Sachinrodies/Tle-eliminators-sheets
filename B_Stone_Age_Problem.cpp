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


void solve()
{

  int n,q;
  cin>>n>>q;

  vector<pair<ll,ll>>a(n,{0,0});
  for(int i=0;i<n;i++){
    cin>>a[i].first;
  }
  ll sum=0;
  for(int i=0;i<n;i++){
    sum+=a[i].first;
  }


  pair<ll,ll>global={0,-1};
  for(int i=1;i<=q;i++){
    int type;
    cin>>type;
    if(type==1){
        int idx;
        ll val;
        cin>>idx>>val;
        if(a[idx-1].second>global.second){
            sum+=(val-a[idx-1].first);

        }
        else{
            sum+=(val-global.first);

        }
        a[idx-1].first=val;
        a[idx-1].second=i;
    }
    else{
        ll val;
        cin>>val;
        sum=(ll)(val*n);
        global.first=val;
        global.second=i;
    }
    cout<<sum<<endl;
  }
  





 
 

 


}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

   
}
