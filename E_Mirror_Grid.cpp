#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <set>
#include <unordered_map>
#include <map>
#include <iostream>
using namespace std;

#define ll long long


void solve()
{
  
 int n;
 cin>>n;
vector<vector<char>>a(n,vector<char>(n));
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
 }

int ans=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int c0=0,c1=0;
        if(a[i][j]=='0'){
            c0++;
        }
        else{
            c1++;
        }
        if(a[j][n-1-i]=='0'){
            c0++;
        }
        else{
            c1++;
        }
        if(a[n-1-i][n-1-j]=='0'){
            c0++;
        }
        else{
            c1++;
        }
        if(a[n-1-j][i]=='0'){
            c0++;
        }
        else{
            c1++;
        }

        if(c0>=c1){
            ans+=c1;
            a[i][j]='0';
            a[j][n-1-i]='0';
            a[n-1-i][n-1-j]='0';
            a[n-1-j][i]='0';


            
        }
        else{
             ans+=c0;
            a[i][j]='1';
            a[j][n-1-i]='1';
            a[n-1-i][n-1-j]='1';
            a[n-1-j][i]='1';

        }
        
    }
}
cout<<ans<<endl;

 
 

 


}




   


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
}
