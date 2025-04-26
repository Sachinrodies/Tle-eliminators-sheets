#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int  solve(string &a){
    int n=a.size();
    int start=0,end=n-1;
    while(start<end){
        char c=a[start];
        char d=a[end];
        if(c!=d){
            start++;
            end--;
        }
        if(c==d){
            break;
        }
    }
    return (end-start+1);
 
    
       
    
   
        
    
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
       
       ans.push_back(solve(a));




       
        
    }
    for(auto i:ans){
        cout<<i<<endl;
    }   


}
