#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
void solve(int n,vector<int> &a,vector<string> &s){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    if(sum%2==0){
        s.push_back("YES");
    }
    else{
        s.push_back("NO");
    }
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
       int n,a,b;
       cin>>n>>a>>b;
       if(a+b+2<=n || (a==b && a==n)){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
        
    }
   return 0;


}
