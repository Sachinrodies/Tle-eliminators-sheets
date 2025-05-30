#include <iostream>
#include <vector>
#include <cmath>
#include<stack>
#include <string>

using namespace std;

#define ll long long

void solve() {
    int n,k;
    cin>>n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans=INT_MAX;
    int even_count = 0;
    for(int i=0;i<n;i++){
        if(a[i] % 2 == 0) {
            even_count++;
        }
        if(a[i]%k==0){
            ans=0;
        }
        ans=min(ans,k-(a[i] % k));
    }
    if(k==4){
        if(even_count >=2 ) {
            ans = 0;
        } else if(even_count == 1) {
            ans = min(ans,1);
        } else {
            ans = min(ans,2);
        }
    }
    cout<<ans << "\n";
   
   
   
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
