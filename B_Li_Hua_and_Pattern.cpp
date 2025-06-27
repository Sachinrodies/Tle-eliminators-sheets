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
   int n,k;
   cin>>n>>k;
   vector<vector<ll>>a(n,vector<ll>(n,0));
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       ll val;
       cin>>val;
       a[i][j]=val;

    }


   }

   ll count=0;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i][j]!=a[n-i-1][n-j-1]){
            count++;
        }
    }
   }
     if(k<((count)/2)){
        cout<<"NO"<<endl;
        return ;
        

    }

   if(n%2==0){
    if((k-(count/2))%2==0){
        cout<<"YES"<<endl;
        return ;
    }
    else{
         cout<<"NO"<<endl;
        return ;

    }
  
   }
   else{
    cout<<"YES"<<endl;
        return ;
    
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
