#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

#define ll long long
bool check(vector<ll>& a, ll x) {
    ll n = a.size();
   vector<ll>b;
   for(int i=0;i<n;i++){
    if(a[i]!=x){
        b.push_back(a[i]);
    }
   }
   ll m=b.size();
   for(int i=0;i<m;i++){
    if(b[i]!= b[m-i-1]){
        return false;
    }
   }
    return true;
    
}



void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for(ll i=0;i<n;i++){
        if(a[i]!=a[n-i-1]){
            if(check(a,a[i])||check(a,a[n-i-1])){
                cout<<"YES"<<endl;
                
            }
            else{
                cout<<"NO"<<endl;
                
            }
            return;
        }
    }
    cout<<"YES"<<endl;

   

            
        
  

   




    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
