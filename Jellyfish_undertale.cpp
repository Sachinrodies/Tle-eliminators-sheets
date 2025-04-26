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
       long long a,b,n;
       cin>>a>>b>>n;
       vector<long long>v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       long long  count=0;
      int i=0;

       while(b>0){
        count+=b;
        b=1;
        if(i<n){
            b=min(b+v[i],a);
            b-=1;
            i++;
        }
        else{
            break;
        }

       }
       cout<<count<<endl;
      



       }
       
      
       

    

    }



