#include <iostream>
#include <vector>
#include <cmath>
#include<stack>
#include <string>
#include<map>
#include<queue>
#include <algorithm>


using namespace std;

#define ll long long
#define P pair<ll,ll>

void solve() {
    ll n, p;
    cin>> n >> p;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }

    ll cost=p;
    ll all_ready_shared=1;
    priority_queue<P, vector<P>, greater<P>> pq;
    for(int i=0;i<n;i++){
        pq.push({b[i], a[i]});
    }

    while(!pq.empty()){
        ll sc= pq.top().first;
        ll can_shared= pq.top().second;
        pq.pop();
        if(sc>p){
            break;
        }
        if(all_ready_shared+can_shared>n){
            cost+=(n-all_ready_shared)*sc;
            all_ready_shared=n;
            break;
        
        }
        else{
            cost+=can_shared*sc;
            all_ready_shared+=can_shared;

        }

    }
    cost+=(n-all_ready_shared)*p;
    cout << cost << "\n";

    
   
   
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
