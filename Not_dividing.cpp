#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
void solve(long long n,vector<long long> &a){
    vector<long long>ans(n);
    if(a[0]==1){
        ans[0]=2;
        a[0]=a[0]+1;

    }
    else{
        ans[0]=a[0];

    }
    
    for(int i=1;i<n;i++){
        if(a[i]%a[i-1]==0 && a[i-1]!=1){
            ans[i]=a[i]+1;
            a[i]+=1;
        }
       else if(a[i]==1){
            if(a[i-1]%2==0){
                a[i]+=2;
                ans[i]=a[i];
            }
            else{
                a[i]+=1;
                ans[i]=a[i];
            }
        

        }
        else{
            ans[i]=a[i];

        }
        
    }
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    
    
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
 
    
    while(t--){
        long long n;
        cin>>n;
        vector<long long >a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        solve(n,a);
        

       
       
    }
    
   
    return 0;


}
