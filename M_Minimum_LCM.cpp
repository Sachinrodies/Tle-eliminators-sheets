#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <string>
#include <map>
#include<set>
#include <queue>
#include <algorithm>
#include <unordered_map>
#include <numeric>

using namespace std;

#define ll long long
#define P pair<ll, ll>



void solve()
{
        ll n;
    cin >> n;

   ll num1 = 1, num2 = n-1;
   for(int i=2;i*i<=n;i++){
    if(n%i==0){
        num1=n/i;
        num2=n-num1;
        break;
   }

       
       
       
        
    }

    cout << num1 << " " << num2 << "\n";

    

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