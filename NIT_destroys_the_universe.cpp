#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
int solve(int n,vector<long long> &a){
   int count=0;
   int i=0;
   while(i<n){
        if(a[i]!=0){
            count++;
        }
       
        while( i<n && a[i]!=0){
            i++;
        }
       
       
        i++;


   }
       
   
   return count==0||count==1?count:2;
   
    
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    vector<long long> ans;
    cin >> t;
    
 
    
    while(t--){
        int n;
        cin>>n;
        vector<long long >a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ans.push_back(solve(n,a));
        

       
       
    }
    for(int i:ans){
        cout<<i<<endl;
    }
    
   
    return 0;


}
