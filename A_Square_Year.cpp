#include <iostream>
#include <vector>
#include <cmath>
#include<string>

using namespace std;

#define ll long long

void solve() {
    string s;
    cin>>s;
    int n=stoi(s);
    int x = sqrt(n);
    if(x * x == n) {
        cout<<0<<" "<<x<<endl;
        
    } else {
        cout << -1 << endl;
    }
    
   
   
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
