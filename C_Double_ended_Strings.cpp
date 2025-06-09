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
ll check(ll n){
    if(n%4==0) return n;
    else if(n%4==1) return 1;
    else if(n%4==2) return n + 1;
    else return 0;
}

void solve()
{
   string a,b;
   cin>>a;
   cin>>b;
   int len_1=a.size();
   int len_2=b.size();
   vector<vector<int>>dp(len_1+1,vector<int>(len_2+1,0));
   int max_len=0;
   for(int i=1;i<=len_1;i++){
    for(int j=1;j<=len_2;j++){
        if(a[i-1]==b[j-1]){
            int val=dp[i-1][j-1]+1;
            dp[i][j]=val;
            max_len=max(max_len,val);
        }
       
    }
   }
   int common_length=max_len;
   int ans=0;
   ans+= (len_1 - common_length) + (len_2 - common_length);
   cout << ans << endl;


    
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
