#include <iostream>
#include <vector>
#include <cmath>
#include<stack>
#include <string>

using namespace std;

#define ll long long

void solve() {
   int n;
   cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+2;j<n;j++){
            if(a[i]<a[j-1] && a[j-1]>a[j]){
                
                   
                        cout<<"YES"<<"\n";
                        cout<<i+1<<" "<<j<<" "<<j+1<<"\n";
                        return;
                    
                
            }
        }
    }
    cout<<"NO"<<"\n";
 
   
   

  

    
    
    
   
   
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
