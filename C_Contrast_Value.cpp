#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(n==1){
        cout<<1<<endl;
        return ;
    }
    vector<ll>ans;
    ans.push_back(a[0]);
    ans.push_back(a[1]);

    for(int i=2;i<n;i++){
        int siz=ans.size();
        ll x=ans[siz-2]-ans[siz-1];
        ll y=ans[siz-1]-a[i];
        if(x>0){
            if(y<0){
                ans.push_back(a[i]);
            }
            else if(y>0){
                ans[siz-1]=a[i];
            }
        }
        else{
            if(y<0){
                ans[siz-1]=a[i];
            }
            else if(y>0){
                ans.push_back(a[i]);
            }
        }
    }
    int len=ans.size();
    if(ans[0]==ans[1]){
        len--;
        
    }
    cout<<len << endl;

   
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
