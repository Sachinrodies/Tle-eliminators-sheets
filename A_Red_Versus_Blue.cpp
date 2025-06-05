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
    int n, b, r;
    cin >> n >> r >> b;
   
    if (r % (b + 1) == 0)
    {
        int val = r / (b + 1);
        string ans = "";
        
        for(int k = 1; k <= b + 1; k++)
        {
            for (int i = 0; i < val ; i++)
            {
                ans += 'R';
              
            }
            if(k!=b+1){
                ans += 'B';

            }

           
           
        }
        cout << ans << endl;
    }
    else
    {
        int val = r / (b + 1);
        int left = r%(b+1);
        string ans = "";
      
        for(int k=1;k<=b+1;k++){
       
            for (int i = 0; i < val ; i++)
            {
                ans += 'R';
                
            }
            if(left>0){
                ans+='R';
                left--;
               
            }
             if(k!=b+1){
                ans += 'B';

            }
            
            
           
        }
        cout << ans << endl;

       
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