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
       if(n%2==0){
        cout<<2<<endl;
        
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;

       }
       else{
        cout<<4<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<n-1<<" "<<n<<endl;
       }
       




       
        
    }
    return 0;
   


}
