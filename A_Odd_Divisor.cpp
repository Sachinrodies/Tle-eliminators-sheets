#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<limits>
using namespace std;
#define ll long long 
int  solve(ll n){
     if(n%2==1){
            return 1;
        }
    else{
        while(n>0){
            if(n%2==0){
                n=n/2;
            }
            else{
                break;
            }
        }
        if(n==1){
            return 0;
        }
        return 1;
    }
    return 0;

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int testCases;
    cin>>testCases;
    vector<int>ans;
    while(testCases--){
        ll n;
        cin>>n;
        ans.push_back(solve(n));
       
        
    }
    for(int i:ans){
        if(i){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}