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
#define P pair<ll, ll>

ll findPower(ll a,ll b){
    if(b==0){
        return 1;
    }
    ll half=findPower(a,b/2);
    ll result=half*half;
    if(b%2==1){
        result*=a;
        }
        return result;
}

void solve()
{
    int n,q;
    cin>>n>>q;
    vector<ll>a(n),b(q);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<q;j++){
        cin>>b[j];
    }
    int prev=31;

    for(int i=0;i<q;i++){
        if(b[i]>=prev){
            continue;
        }
        else{
            for(int j=0;j<n;j++){
                if(a[j]%findPower(2,b[i])==0){
                    a[j]+=findPower(2,b[i])/2;

                }
            }
            prev=b[i];
        }

    }
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
  




    
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
