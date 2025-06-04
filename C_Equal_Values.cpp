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


using namespace std;

#define ll long long
#define P pair<ll, ll>

void   solve(){
    int n;
    cin>> n;
    vector<int> a(n);
    for(int i = 0; i
    < n; i++){
        cin >> a[i];
    }
    int i=0,j=0;
    ll min_cost=LLONG_MAX;
    while(i<n && j<n){
        while(j<n && a[j]== a[i] ){
           
           
            ll val=1ll *i*a[i]+1*1ll *(n-j-1)*a[i];
            if(val<min_cost){
                min_cost=val;
            }
            j++;



        }
        i=j;

    }
    cout<< min_cost << "\n";
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