#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

#define ll long long
#define pll pair<ll, ll>

ll manhattan(pair<ll, ll> p1, pair<ll, ll> p2) {
    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}

void solve() {
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    a--,b--; 
    vector<pll>cities(n);
    for(int i=0;i<n;i++){
        cin>>cities[i].first>>cities[i].second;
    }


    ll direct=manhattan(cities[a],cities[b]);
    if(a<k && b<k ){
        cout<<0<<endl;
        return ;
    }

    if(k==0){
        cout<<direct<<endl;
        return ;
    }

    ll min_a=LLONG_MAX,min_b=LLONG_MAX;
    for(int i=0;i<k;i++){
        min_a=min(min_a,manhattan(cities[a],cities[i]));
        min_b=min(min_b,manhattan(cities[b],cities[i]));
    }

    ll total=min_a+min_b;
    cout<<min(direct,total)<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
