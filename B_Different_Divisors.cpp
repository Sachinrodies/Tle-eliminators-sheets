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

using namespace std;

#define ll long long
#define P pair<ll, ll>

ll next_prime(ll n) {
    for(ll i=n;;i++){
        bool is_prime = true;
       for(ll j=2; j*j<=i; j++) {
            if(i%j==0) {
                is_prime = false;
                break;
            }
        }
        if(is_prime) {
            return i;
        }
    }
    
}


void solve()
{
    ll d;
    cin>>d;
    ll p=next_prime(d+1);
    ll q=next_prime(p+d);
    ll min_val=min(1ll*p*p*p,1ll*p*q);
    cout << min_val << endl;

   
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
