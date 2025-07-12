#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include<queue>
using namespace std;

#define ll long long




void solve() {
   int n,k;
   cin>> n >> k;
   vector<ll> a(n);
   for(int i=0;i<n;i++){
         cin >> a[i];
   }

   vector<ll>colors[k+1];
   for(int i=1;i<=k;i++){
         colors[i].push_back(0);
   }

   for(int i=0;i<n;i++){
    colors[a[i]].push_back(i + 1);
   }
   for(int i=1;i<=k;i++){
         colors[i].push_back(n + 1);
   }

   priority_queue<ll> jump[k+1];
   ll ans=LLONG_MAX;
   for(int i=1;i<=k;i++){
    for(int j=0;j<colors[i].size() - 1;j++){
        ll diff = colors[i][j + 1] - colors[i][j] - 1;
        jump[i].push(diff);
       
    }
     ll maxVal= jump[i].top();
        jump[i].pop();
    if(maxVal%2==0){
        jump[i].push(maxVal / 2);
        jump[i].push((maxVal / 2)-1);
    }
    else{
        jump[i].push(maxVal / 2);
        jump[i].push((maxVal / 2));
    }
    ans = min(ans, jump[i].top());
   }
   cout<< ans << endl;
  




   

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}
