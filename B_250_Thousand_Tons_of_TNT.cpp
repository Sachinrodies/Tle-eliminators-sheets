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
        cout<<0<<endl;
        return ;
    }

  
    //Calculate all divisors of a number;
    vector<ll>div;
    for(int i=1;i<n-1;i++){
        if(n%i==0){
            div.push_back(i);
        }
    }

    vector<ll>prefixSum(n);
    prefixSum[0]=a[0];
    for(int i=1;i<n;i++){
        prefixSum[i]=prefixSum[i-1]+a[i];
    }

    ll maxDiff=abs(*max_element(a.begin(),a.end())-*min_element(a.begin(),a.end()));
    for(int i:div){
        ll min_val=prefixSum[i-1];
        ll max_val=prefixSum[i-1];
        for(int j=2*i-1;j<n;j+=i){
            min_val=min(min_val,prefixSum[j]-prefixSum[j-i]);
            max_val=max(max_val,prefixSum[j]-prefixSum[j-i]);
            maxDiff=max(maxDiff,max_val-min_val);
        }


        
    }

    cout<<maxDiff<<endl;


   

   
       



       




    
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
