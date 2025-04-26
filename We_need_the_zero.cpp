#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int  solve(vector<int> &a){
   if(a.size()==1){
    return a[0];
   }

   int cumSum=a[0];
   for(int i=1;i<a.size();i++){
    cumSum^=a[i];
   }
   int val=a[0]^cumSum;
   for(int i=1;i<a.size();i++){
    val^=(a[i]^cumSum);
   }
   if(val!=0){
    return -1;
   }
   return cumSum;

    
       
    
   
        
    
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
