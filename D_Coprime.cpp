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
 
  vector<int>indices(1001, 0);
  for(int i=1;i<=n;i++)
  {
      int x;
        cin>>x;
      indices[x] = i ;
  }
  vector<int>pairs[1001];
  for(int i=1;i<=1000;i++){
    for(int j=1;j<=1000;j++){
        if(gcd(i,j) == 1) {
            pairs[i].push_back(j);
        }
    }
  }
  int ans=-1;
  for(int i=1;i<=1000;i++){
      if(indices[i] == 0) continue; // Skip if no index found for i
      for(int k:pairs[i]){
        if(indices[k] != 0){
            ans = max(ans, indices[k] + indices[i]);

        }
        
        
        
      }
     
  }
  cout << ans << "\n";


  
  


  
    
    

    

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
