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

void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<a[0]<<endl;
        return ;
    }

    int i=0,j=1;
    ll sum=a[0];
    ll maxSum=a[0];

    while(i<n && j<n){
        if(abs(a[j]%2)!=abs(a[j-1]%2)){
            if(sum<0){
                sum=0;
            }
           
            sum+=a[j];
            maxSum=max(maxSum,sum);
            
        }

        else{
           
            sum=a[j];
             maxSum=max(maxSum,sum);
        }
        j++;
       



       




    }
    cout<<maxSum<<endl;
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
