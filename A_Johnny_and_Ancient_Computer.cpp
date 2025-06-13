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

void solve()
{
   ll a,b;
   cin>>a>>b;
   ll power_first=0;
   while(a>=1){
    if(a%2==0){
        a=a/2;
        power_first++;
    }
    else{
        break;
    }
   }
   ll power_second=0;
     while(b>=1){
    if(b%2==0){
        b=b/2;
        power_second++;
    }
    else{
        break;
    }
   }

   if(a!=b){
    cout<<-1<<endl;
   }
   else{
    ll  ans=ceil((abs(power_second-power_first))/3.0);
    cout<<ans<<endl;

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
