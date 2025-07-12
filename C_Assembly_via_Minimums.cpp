#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#define ll long long




void solve() {
   int n;
    cin >> n;
    int val=n*(n-1)/2;
    vector<ll> b(val);
    for(int i=0;i<val;i++ ){
        cin >> b[i];
    }

    sort(b.begin(), b.end());
    vector<ll> a;
  
    int count=0;
    int j=n-1;
    for(int i=0;i<val;i++){
        count++;
        if(count==j){
            a.push_back(b[i]);
            j--;
            count=0;
        } 

    }
    a.push_back(1e9);
    
    
    

    for(ll x : a) {
        cout << x << " ";
    }
    cout << "\n";


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}
