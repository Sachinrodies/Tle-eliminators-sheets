#include <iostream>
#include <vector>
using namespace std;
int  solve(int n,vector<int> &a){
    int count_Neg=0;
    int count_Pos=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            count_Neg++;
        }
        else{
            count_Pos++;
        }
    }
    int operations=0;
   while(count_Pos<count_Neg || count_Neg%2==1){
    count_Pos++;
    count_Neg--;
    operations++;
   }
   return operations;
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