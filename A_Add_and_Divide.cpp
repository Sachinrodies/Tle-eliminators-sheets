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


void solve()
{
    ll a,b;
    cin >> a >> b;
    ll ans=(b==1)?1:0;
  ll min_OP=LLONG_MAX;
    while(ans<=40){
       ll new_b=b+ans;
        ll val=0;
        ll temp=a;
        while(temp>0)
        {
            
            temp/=new_b;
            val++;
        }
        if(val+ans<min_OP){
            min_OP=val+ans;
        }
      
        ans++;

    }
    cout << min_OP << endl;

   
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
