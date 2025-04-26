#include <iostream>
#include <vector>
using namespace std;
int  solve(int n,vector<int> &a){
   int max_length=0;
   for(int i=0;i<n;i++){
    if(a[i]==0){
        int j=i;
        while(a[j]==0 && j<n){
           
            max_length=max(max_length,j-i+1);
             j++;

        }
    }
   }
   return max_length;
}
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<int> ans;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       ans.push_back(solve(n,a));
        
 
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
 
    
}