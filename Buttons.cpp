#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
void solve(int a,int b,int c){
    if(c%2){
        if(b>a){
            cout<<"Second"<<endl;
            
        }
        else{
            cout<<"First"<<endl;
        }
    }
    else{
        if(a>b){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        solve(a,b,c);
    }


}
