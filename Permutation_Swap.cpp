#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
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
         vector<int> a(n);
            for(int i=0;i<n;i++){
                cin>>a[i];
                }
        int g=abs(a[0]-1);
        for(int i=1;i<n;i++){
            g=gcd(g,abs(a[i]-(i+1)));
        }
        ans.push_back(g);



       
       
      
       




       
        
    }
    for(int i:ans){
        cout<<i<<endl;
    }
    return 0;
   


}
