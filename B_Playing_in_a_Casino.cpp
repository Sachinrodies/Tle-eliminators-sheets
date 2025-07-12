#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
using namespace std;

#define ll long long

void solve()
{
    int n,m;
    cin>> n >> m;
    vector<vector<ll>> twoD(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ll x;
            cin >> x;
            twoD[i].push_back(x);
        }
    }
    // Now make the winning combinations.
    // edge case
    if(n==1){
        cout<<0<<endl;
        return ;
    }
    ll sum=0;


  for(int j = 0; j < m; j++) {
    vector<ll> temp;
    for(int i = 0; i < n; i++) {
        temp.push_back(twoD[i][j]); // Accessing column j across all rows
    }

    sort(temp.begin(), temp.end());

    ll sample = 0;
    for(int i = 0; i < n; i++) {
        sample +=  i * temp[i];
        sample += -1*(n - 1 - i) * temp[i];
    }

    sum += sample;
}
    cout<<sum << endl;

   
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
}
