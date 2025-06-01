#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if(min(b,d)<=min(a,c)){
        cout<<"Gellyfish"<<endl;
    }
    else{
        cout<<"Flower"<<endl;
    }

  
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
