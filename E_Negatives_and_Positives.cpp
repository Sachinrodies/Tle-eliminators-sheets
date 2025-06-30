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
  int n;
  cin>>n;
  vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a.begin(), a.end());
    int i=0;
    while(i<n-1){
        if(a[i]>0 && a[i+1]>0){
            i+=2;
        }
        else{
            if(a[i]+a[i+1]<(-a[i]-a[i+1])){
                a[i]=-1*a[i];
                a[i+1]=-1*a[i+1];
                i+=2;
            }
            else{
                i+=2;
            }
        }
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<sum<<"\n";
   

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
