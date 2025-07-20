#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <set>
#include <unordered_map>
#include <map>
using namespace std;

#define ll long long


void solve()
{
  
 int n;
 cin >> n;
 vector<ll> x(n),y(n);
 for(int i=0;i<n;i++){
    cin>>x[i];
 }
  for(int i=0;i<n;i++){
    cin>>y[i];
 }

 vector<ll>pos,neg;
 for(int i=0;i<n;i++ ){
    if(y[i]-x[i]<0){
        neg.push_back(y[i]-x[i]);
    }
    else {
        pos.push_back(y[i]-x[i]);
    } 
 }
 sort(pos.begin(),pos.end());
    sort(neg.rbegin(),neg.rend());
 int teamNeg=0;
 int j=0;
 for(int i=0;i<neg.size();i++){
    while(j<pos.size() && pos[j]+neg[i]<0){
        j++;
    }
    if(j==pos.size()){
        break;
    }
    teamNeg++;
    j++;
 }
 cout<<teamNeg+(pos.size()-teamNeg)/2<<endl;



   
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
