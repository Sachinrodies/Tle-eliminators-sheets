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


using namespace std;

#define ll long long
#define P pair<ll, ll>

void   solve(){
    ll n,x;
    cin>> n >> x;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

   
    int left = a[0] - x, right = a[0] + x;
    int changes = 0;

    for (int i = 1; i < n; ++i) {
        int new_left = a[i] - x, new_right = a[i] + x;

        
        if (new_left > right || new_right < left) {
           
            changes++;
            left = new_left;
            right = new_right;
        } else {
            
            left = max(left, new_left);
            right = min(right, new_right);
        }
    }

    cout << changes << '\n';

   
    
}
   
   


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while (t--)
    {
        solve();
    }

   

    return 0;
}