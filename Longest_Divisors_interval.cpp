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
       long long n;
       cin>>n;
       int i=1;
       while(n%i==0){
        i++;
       }
       ans.push_back(i-1);

       
       
      
       




       
        
    }
    for(int i:ans){
        cout<<i<<endl;
    }
    return 0;
   


}
