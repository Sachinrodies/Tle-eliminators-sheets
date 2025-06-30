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

ll gcd(ll a,ll b) {
    if(b==0){
        return a;
    }
    return gcd(b,a%b);

}

void solve()
{
  int n;
  cin>>n;
  vector<ll> a(n);
  ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ll max_Val=1;
    ll sum2=0;

    for(int i=0;i<n-1;i++){
        sum2+=a[i];
        sum-=a[i];
        ll current_gcd = gcd(sum2, sum);
        if(current_gcd > max_Val) {
            max_Val = current_gcd;
        }

    }
    cout<<max_Val<<"\n";
    

    

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
