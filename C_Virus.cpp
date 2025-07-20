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
  
 int n,m;
 cin>>n>>m;
 vector<ll>a(m);
 for(int i=0;i<m;i++){
    cin>>a[i];
 }
 sort(a.begin(),a.end());
 ll max_range=(n-a[m-1])+(a[0]-1);
 for(int i=1;i<m;i++){
    max_range=max(max_range,a[i]-a[i-1]-1);
 }
 vector<ll>diff;
 for(int i=1;i<m;i++){
    diff.push_back(a[i]-a[i-1]-1);
 }
 diff.push_back(n-(a[m-1])+(a[0]-1));
 sort(diff.rbegin(),diff.rend());
 int nod=0;
 int numSaved=0;
 for(auto it:diff){
    ll currDiff=it-nod*2;
    if(currDiff>0){
        numSaved++;
        currDiff-=2;
         if(currDiff>0){
        numSaved+=currDiff;

      }
       nod+=2;
    }
   
   
 }
 cout<<n-(numSaved)<<endl;



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
