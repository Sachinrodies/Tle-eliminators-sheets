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
    int n;
    cin>>n;
    vector<int>second_min;
    int first_min=INT_MAX;
    ll sum=0;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<int> a(m);
        for(int j=0;j<m;j++){
            cin>>a[j];
        }
        sort(a.begin(), a.end());
        first_min=min(first_min, a[0]);
        if(m>1){
            second_min.push_back(a[1]);
            sum+= a[1];
        }
       
       
       

    }
      sort(second_min.begin(), second_min.end());
        sum-= second_min[0];
        sum+= first_min;
        cout << sum << "\n";

    
     
   
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