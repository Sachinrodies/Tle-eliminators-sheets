#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include <cmath>


using namespace std;
void solve(){
    long long n;
    cin>>n;
    if(n<4 ||n%2==1){
        cout<<-1<<endl;
        return;
    }
    long long val1;
    long long rem=n%6;
    if(rem==0){
        val1=n/6;
    }
    else if(rem==2){
        val1=(n-8)/6+2;
        
    }
    else {
        val1=(n-4)/6+1;
    }
    
   
    long long val2=floor(n/4);
    cout<<val1<<" "<<val2<<endl;

   
   
   
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    
    cin >> t;
    
 
    
    while(t--){
       solve();
        

       
       
    }
    
   
    return 0;


}
