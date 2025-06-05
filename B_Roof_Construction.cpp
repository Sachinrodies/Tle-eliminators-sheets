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

using namespace std;

#define ll long long
#define P pair<ll, ll>

void solve()
{
    ll n;
    cin>>n;
    n--;
    ll bit=log2(n);
    ll val=pow(2,bit)-1;
    vector<ll> ans;
    for(int i=val;i>=0;i--){
        
            ans.push_back(i);
       
    }
    val=pow(2,bit);
    for(int i=val;i<=n;i++){
        ans.push_back(i);
    }
    for(int i: ans){
        cout<<i<<" ";
    }
    cout << endl;


    
}

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin >> t;
        while (t--)
        {
            solve();
        }

        return 0;
    }