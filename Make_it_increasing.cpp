#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include <cmath>


using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int count=0;
    for(int i=n-2;i>=0;i--){
        while(a[i]>=a[i+1]){
            count++;
            a[i]=floor(a[i]/2);
            if(a[i]==0){
            break;
            }
             
        }
       if(a[i]==0 && a[i+1]==0){
        return -1;
       }
        
      
       
    }
    
   return count;
   
   
   
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>ans;
    int t;
    
    
    cin >> t;
    
 
    
    while(t--){
       ans.push_back(solve());
        

       
       
    }
    for(int i:ans){
        cout<<i<<endl;
    }
    
   
    return 0;


}
