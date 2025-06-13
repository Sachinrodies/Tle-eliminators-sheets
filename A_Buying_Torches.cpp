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
   ll x,y,k;
   cin>>x >> y >> k;
      ll total_sticks_req = k * (y + 1);

    // Steps required to gather remaining sticks
    ll remaining_sticks = total_sticks_req - x;
    ll total_steps = (remaining_sticks + (x - 2)) / (x - 1); // Add (x - 2) to handle remainder

    // Total steps = steps to gather sticks + steps to trade coal
    cout << total_steps + k +1<< endl;


    
   
    


   
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
