#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <set>
#include <unordered_map>
#include <map>
#include <iostream>
using namespace std;

#define ll long long


void solve()
{

    int n;
    cin>>n;
    vector<vector<ll>> piles(n,vector<ll>(4));
    for(int i=0;i<n;i++){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        piles[i][0]=a;
        piles[i][1]=b;
        piles[i][2]=c;

        piles[i][3]=d;

    }

    ll ans=0;
    for(int i=0;i<n;i++){
       
         if(piles[i][1]>piles[i][3]){

            ans+=piles[i][0]+(piles[i][1]-piles[i][3]);
            
        }
         else if(piles[i][0]>piles[i][2]){
            ans+=(piles[i][0]-piles[i][2]);
           

        }
    }
    cout<<ans<<endl;
  

       

 
 

 


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
