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

using namespace std;

#define ll long long
#define P pair<ll, ll>

void   solve(){
   long long x;
    cin >> x;

    int k = ceil(log2(x + 1));
    cout << (2 * k +1 ) << '\n';

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