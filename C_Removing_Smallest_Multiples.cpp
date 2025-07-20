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
  string s;
  cin >> s;
  ll count=0;
  vector<bool> canDelete(n+1,false);
  for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j+=i){
        if(s[j-1]=='1'){
            break;

        }
        if(canDelete[j]){
            continue;
        }
        else{
            canDelete[j]=true;
            count+=i;
        }
    }
  }
  cout<< count << endl;
    



   
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
