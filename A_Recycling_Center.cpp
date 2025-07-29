#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include<tuple>
#include <queue>
#include <set>
#include <unordered_map>
#include <map>
#include <iostream>

using namespace std;

#define ll long long
bool comp(int a, int b) {
    return a > b;
}



void solve()
{
    int n,c;
    cin>>n>>c;
    vector<ll>a(n);
    for(auto & it:a){
        cin>>it;
    }
    sort(a.rbegin(),a.rend());
    ll op=0;
    for(int i=0;i<n;i++){
        // for(ll i:a){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        if(a[i]==-1)continue;
        bool flag=false;
        
        for(int j=0;j<n;j++){
            if(a[j]==-1)continue;
            if(a[j]<=c && !flag){
                a[j]=-1;
                flag=true;

            }
            else{
                a[j]*=2;
            }
        }
    }
    for(ll i:a){
        if(i!=-1){
            op++;
        }
    }
    cout<<op<<endl;

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
