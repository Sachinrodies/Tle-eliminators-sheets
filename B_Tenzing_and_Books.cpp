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
    int n,x;
    cin>>n>>x;
    vector<int>pre[3];
    for(int i=0;i<3;i++){
        int s=0;
        pre[i].push_back(s);
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            if((s|a)!=s){
                s|=a;
                pre[i].push_back(s);
            }
        }

    }
    bool ans=0;
    for(int i:pre[0]){
        for(int j:pre[1]){
            for(int k:pre[2]){
                if((i|j|k)==x){
                    ans=1;
                   
                }
            }
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    



    


   
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
