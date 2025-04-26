#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int  solve(int a,int b,int c,int d){
    if(b>d){
        return -1;
    }
    int moves=d-b;
    a+=moves;
    //Now we achieved destination of y coordinate
    if(c>a){
        return -1;
    }
    
         moves+=a-c;
       return moves;

    
       
    
   
        
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> ans;
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        ans.push_back(solve(a,b,c,d));




       
        
    }
    for(auto i:ans){
        cout<<i<<endl;
    }   


}
