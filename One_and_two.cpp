#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int  solve(vector<int> &a){
   int n=a.size();
   int count_twos=0;
   vector<int> ans(n,0);
   
   if(a[0]==2){
    count_twos++;
    ans[0]=1;
   }
  
   for(int i=1;i<n;i++){
    if(a[i]==2){
        count_twos++;
        ans[i]=1+ans[i-1];
    }
    else{
    
        ans[i]=ans[i-1];
    }

    

   }
   if(count_twos==0){
    return 1;
   }
   
   
   for(int i=0;i<n;i++){
    if(ans[i]==count_twos-ans[i]){
        return i+1;
    }
   }
   return -1;
}
   
    
       
    
   
        
    


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> ans;
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int>a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       ans.push_back(solve(a));




       
        
    }
    for(auto i:ans){
        cout<<i<<endl;
    }   


}
