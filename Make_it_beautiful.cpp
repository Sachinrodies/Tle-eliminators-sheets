#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> ans;
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<long long>a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       sort(a.begin(),a.end());
       if(a[n-1]==a[0]){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
        cout<<a[n-1]<<" ";
        for(int i=0;i<n-1;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
       }




       
        
    }
   


}
