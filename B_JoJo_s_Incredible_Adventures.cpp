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
  string s;
  cin >> s;
  int n=s.size();
  int count_one=0;
  int i=0;
  while(i<n){
    if(i<n && s[i]=='0'){
      
      i++;
      continue;
    }
    int j=i+1;
    while(j<n && s[j]=='1'){
      j++;
      
    }
    count_one=max(count_one, j-i);
    i=j;
    
  }
  if(count_one==n){
    cout<<1ll*n*n<<endl;
    return;
  }
  if(s[0]=='1' && s[n-1]=='1'){
   int i=0;
   int maxi=0;
   while(i<n && s[i]=='1'){
      i++;
      maxi++;
   }
   int j=n-1;
   while(j>=0 && s[j]=='1'){
      j--;
      maxi++;
   }
   count_one=max(count_one, maxi);
   
  }
  count_one++;
  int val=(count_one+1)/2;
    cout << 1ll*val *(count_one/2)<< endl;
  






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
