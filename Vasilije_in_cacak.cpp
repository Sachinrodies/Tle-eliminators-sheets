#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       long long n,k,s;
       cin>>n>>k>>s;
       long long min_Sum=k*(k+1)/2;

       long long max_Sum=(n*(n+1)/2)-(n-k)*(n-k+1)/2;
      
       if(s>=min_Sum && s<=max_Sum){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }

    

    }


}
