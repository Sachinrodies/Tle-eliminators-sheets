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
    int n;
    cin >> n;
    ll val;
    vector<P> a;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        a.push_back({val, i});
    }

    sort(a.begin(), a.end());
    vector<ll> prefix(n);
    prefix[0] = a[0].first;
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i].first;
    }
    vector<ll>ans(n);
    for(int i=0;i<n;i++){
        int curr=i;
        int found=i;
        while(curr<n){
            P temp={prefix[curr]+1,INT_MIN};
            int idx=lower_bound(a.begin(),a.end(),temp)-a.begin();
            idx--;
            if(idx==curr){
                break;
            }
            found+=idx-curr;
            curr=idx;

        }
        ans[a[i].second]=found;
    }
    for(int i:ans){
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
