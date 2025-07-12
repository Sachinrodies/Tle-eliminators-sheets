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
    cin>> n;
    map<int,int>freq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        freq[x]++;
    }


    int ans=0;
    for(auto[x,f]:freq){
       ans+=max(0,freq[x]-freq[x-1]);
    }
    cout<<ans << endl;
    
    



   
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
