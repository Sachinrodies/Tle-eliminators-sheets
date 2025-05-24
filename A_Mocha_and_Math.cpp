#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int testCases;
    cin>>testCases;
    while(testCases--){
       int n;
       cin>>n;
       vector<ll>a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       ll ans=a[0];
       for(int i=1;i<n;i++){
        ans&=a[i];
       }
       cout<<ans<<endl;

       
    }
    return 0;
}