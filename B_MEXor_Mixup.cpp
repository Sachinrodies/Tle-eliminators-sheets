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
ll check(ll n){
    if(n%4==0) return n;
    else if(n%4==1) return 1;
    else if(n%4==2) return n + 1;
    else return 0;
}

void solve()
{
    ll Mex, val;
    cin >> Mex >> val;
    ll sample=check(Mex-1);
  
   






    if (sample == val)
    {
        cout << Mex << endl;
    }
    else if((sample^val)!=Mex){
        cout<< Mex + 1 << endl;
    }
    else{
        cout << Mex + 2 << endl;
    }

    
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
