#include <iostream>
#include <vector>
using namespace std;
long long solve(long long n, long long k){
   long long result=(n-k)%2;
   if(result==0){
    return 1;
   }
   else if(n%2==0){
    return 1;
   }
   else{
    if(n%k==0){
        return 1;
    }
    else{
        return 0;
    }
   }
}
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<int> ans;
    while(t--){
       long long n,k;
       cin>>n>>k;
       ans.push_back(solve(n,k));
        
 
    }
    for(int i:ans){
        if(i==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
 
    
}