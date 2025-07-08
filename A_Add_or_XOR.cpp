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
    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    
    // count no of odds
    ll oddCount=0;
    ll evenCount=0;
    if(b-a>0){

    
    if(a%2==1 && b%2==1) {
        if((b - a) % 2 == 0){
            oddCount = (b-a)/2 ;
            evenCount = (b-a)/2 ;

        }
        else{
            oddCount= (b-a)/2 + 1;
            evenCount = (b-a)/2 ;
        }
        

    }
    else if(a%2==0 && b%2==0) {
        oddCount = (b-a)/2 ;
        evenCount = (b-a)/2 ;
    }
    else if(a%2==0 && b%2==1) {
        evenCount = (b-a)/2 +1;
        oddCount = (b-a)/2 ;
        
    }
    else{
        oddCount = (b-a)/2 +1;
        evenCount = (b-a)/2 ;
    }



    ll TotalCost= (oddCount * x) + (evenCount * y);
    if(TotalCost>(b-a)*x){
            cout<<(b-a)*x<<"\n";
        }
    else{
            cout<<TotalCost<<"\n";
    }
    
    }
    else{
        if(a==b){
            cout<<0<<"\n";
        }
        else{
            if(a%2==0){
                cout<<-1<<endl;
            }
            else{
                if(a-b>1){
                    cout<<-1<<"\n";
                }
                else{
                  cout<<y<<"\n";
                  
                
                }
            }
        }
        
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
