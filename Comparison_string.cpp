#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int solve(int n,string &a){
 if(n==1){
    return 2;
 }
 else{
    int continuous=0;
    bool flag=false;
    if(a[0]=='<'){
        flag=true;
    }
  
   
   
    int maxlen=0;
    for(int i=1;i<n;i++){
        if(a[i]=='<'){
            flag=true;
        }
        if(a[i]==a[i-1]){
            continuous++;
        }
        else{
            
            continuous=0;
        }
        maxlen=max(maxlen,continuous);
    }
    if(maxlen==0 && !flag){
        return n+1;
    }
    return maxlen+2;
    
 }
      
       

    
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
      string a;
      cin>>a;
        ans.push_back(solve(n,a));




       
        
    }
    for(int i:ans){
        cout<<i<<endl;
    }
  
    return 0;
   


}
