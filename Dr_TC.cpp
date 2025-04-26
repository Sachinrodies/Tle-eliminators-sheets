#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
void solve(int n,string &s){
  if(n==1){
    if(s[0]=='0'){
        cout<<1<<endl;
        
    }
    else{
        cout<<0<<endl;
    }
  }
  else{
    int count=0;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        if(j!=i){
            if(s[j]=='1'){
                count++;
            }
        }
        if(j==i){
            if(s[j]=='0'){
                count++;
            }
        }
       }

    }
    cout<<count<<endl;
  }
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        solve(n,s);
        
    }
   


}
