#include <iostream>
#include <vector>
#include <cmath>
#include<string>

using namespace std;

#define ll long long

void solve() {
   int n;
   cin>>n;
    vector<int> a(n);
    for(int i=0;i<n
;i++) {
        cin>>a[i];
    }
    int count_len=1;
    int prev=a[0];
    for(int i=1;i<n;i++){
        if(a[i]-prev>1){
            count_len++;
            prev=a[i];
        }
    }
    cout<<count_len<<endl;
    
   
   
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
