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
    vector<ll> a(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    } 

    ll left_Sum=0;
    ll right_Sum=0;
    ll count=0;
    int i=0, j=n-1;
    int ans=-1;
    while(i <= j)
    {
        
        if(left_Sum==right_Sum && j-i > 1){
            left_Sum += a[i];
            right_Sum += a[j];
             count+=2;
            if(left_Sum==right_Sum){
                ans=count;
            }
            

           
            i++;
            j--;
            
        }
        else if(left_Sum < right_Sum){
            left_Sum += a[i];
             count++;
            if(left_Sum==right_Sum){
               ans=count;
            }
           
            i++;
        }
        else{
            right_Sum += a[j];
            count++;
            if(left_Sum==right_Sum){
               ans=count;
            }
            j--;
        }

       
    }
    if(left_Sum!=right_Sum && ans==-1){
        cout << 0 << "\n";
    }
    else{
        cout << ans << "\n";
    }

   
 
   


    
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
