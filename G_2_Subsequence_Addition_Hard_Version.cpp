#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <unordered_map>
#include <numeric>
#include <climits>
#include <map>
#include <unordered_set>

using namespace std;

#define ll long long

void solve()
{
   int n;
   cin>>n;

    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    ll prefixSum=1;
    for(int i=0;i<n;i++){
        if(a[i]<=prefixSum ){
            if(i>=1){
                prefixSum += a[i];
            }
           
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    
  
  
 






}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }

    return 0;
}
