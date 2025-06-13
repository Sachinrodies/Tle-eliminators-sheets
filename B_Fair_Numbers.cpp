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
bool isFair(ll n){
  ll c=n;
  
  while(c!=0){
     ll rem = c % 10;
        if(rem != 0 && n % rem != 0) return false; 
   c/=10;
  }
  return true;
    

}





void solve()
{
  ll n;
  cin >> n;
  while(!isFair(n)){
    n++;
  }
 cout<<n<<endl;
   
    


   
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
