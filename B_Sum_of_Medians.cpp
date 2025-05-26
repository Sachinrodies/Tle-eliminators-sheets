#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define ll long long

void solve() {
    int n, x;
    cin >> n >> x;
    vector<ll> a(n*x);
    

    for (int i = 0; i < n*x; i++) {
        cin >> a[i];
       
       
    }
    ll pointer=n*x;
    ll sum=0;
    while(x--){
        pointer-=((n/2)+1);
        sum+=a[pointer];

    }
    cout<<sum<<endl;

   
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
