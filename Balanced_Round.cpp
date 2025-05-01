#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int solve(int n,int k,vector<int> & a){
    if(n==1){
       return 0;
    }
   
       sort(a.begin(),a.end());
       int maxlen=1;
       int len=1;
       for(int i=1;i<n;i++){
        if(a[i]-a[i-1]<=k){
            len++;
        }
        else{
           
            len=1;
        }
         maxlen=max(maxlen,len);
        
       }
       return n-maxlen;
      
       

    
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> ans;
   
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
         vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            }
        ans.push_back(solve(n,k,a));




       
        
    }
    for(int i:ans){
        cout<<i<<endl;
    }
  
    return 0;
   


}
