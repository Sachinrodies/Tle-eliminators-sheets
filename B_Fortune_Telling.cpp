#include<iostream>
#include<vector>
#include<string>
#include<numeric>
#include<cmath>
#include<set>
using namespace std;
 #define ll long long 


 void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll>a(n);
    for(auto &it:a){
        cin>>it;
    }
    bool f=1;
    for(ll i:a){
        if(i&1){
            f=!f;
        }

    }

    if(x&1){
        if(!((f^y) & 1ll)){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;

        }

    }
    else{
        if(!((f^y) & 1ll)){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;

        }

        
    }


   
                 

 }
 int main(){

    int testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;

 }