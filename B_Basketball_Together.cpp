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

void solve()
{
    ll n,d;
    cin>> n >> d;
    vector<ll> power(n);
    for(int i=0;i<n;i++){
        cin >> power[i];
    }
   
    sort(power.begin(), power.end());
    int team=0;
    int left=-1,right=n-1;
    int teamsize=1;
    while(left<right){
        if(teamsize*power[right]<=d && left<right){
            left++;
            teamsize++;
        }
        else{
            right--;
            team++;
            teamsize=1;
        }
    }
    

   
    cout<< team << "\n";

    
    

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

  
        solve();
    

    return 0;
}