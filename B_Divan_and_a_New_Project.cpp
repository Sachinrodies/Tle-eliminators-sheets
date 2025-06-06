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
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<2*1ll*a[0]<<endl;
        cout<<0<<" "<<1<<endl;
        return;
    }
    vector<P> ans;
    for(int i=0;i<n;i++){
        ans.push_back({a[i],i+1});
        
    }

    sort(ans.rbegin(), ans.rend());
    vector<ll>result(n+1);
    result[0]=0;
    int left=-1;
    int right=1;
    ll total_cost=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            ll val=ans[i].first;
            ll index=ans[i].second;
            result[index]=right;
            total_cost+=2*1ll*val*right;
            right++;
        }
        else{
            ll val=ans[i].first;
            ll index=ans[i].second;
            result[index]=left;
            total_cost+=2*1ll*val*abs(left);
            left--;
        }
    }
    cout<<total_cost << endl;
    for(int i:result){
        cout<<i<<" ";   
    }
    cout << endl;

    

    
   
     

    
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
