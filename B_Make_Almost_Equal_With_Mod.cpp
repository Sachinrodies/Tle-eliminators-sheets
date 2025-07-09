#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>

using namespace std;

#define ll long long


void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long ans=0;
    for(int i=1;i<=60;i++){
        long long val=1ll<<i;
        set<ll> s;
        for(ll j:a){
            s.insert(j % val);
        }
        if(s.size()==2){
           ans=val;
            break;
        }
    }
    cout<<ans<<endl;
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
   int testCase;
   cin>>testCase;
   while(testCase--){
    solve();
   }
}