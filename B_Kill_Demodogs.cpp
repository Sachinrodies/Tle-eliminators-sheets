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
  ll n;
  cin>>n;
  int MOD=1e9+7;
  ll sum = (((((n*(n+1))%MOD)*(4*n-1)%MOD))*337)%MOD;
  cout << sum << endl;
  
  
  

  
  
  
    
    

    

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
