#include<iostream>
using namespace std;
#define ll long long 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int testCases;
    cin>>testCases;
    while(testCases--){
        ll a,b;
        cin>>a>>b;
        ll diff=abs(a-b);
        if(diff==1){
            cout<<1<<" "<<0<<endl;
            
        }
       else if(a==b){
        cout<<0<<" "<<0<<endl;
       }
       else{
            ll min_val=min(a,b);
            ll x=min(min_val%diff,diff-min_val%diff);
            cout<<diff<<" "<<x<<endl;
       }
    }
    return 0;
}