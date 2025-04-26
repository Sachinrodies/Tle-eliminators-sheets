#include<iostream>
#include<vector>
using namespace std;
void solve(int x,int k){
    if(x<k){
        cout<<1<<endl;
        cout<<x<<endl;
    }
    else if(x%k==0){
        cout<<2<<endl;
        cout<<x-1<<" "<<1<<endl;
    }
    else{
        cout<<1<<endl;
        cout<<x<<endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        solve(x,k);
    }
    return 0;

}