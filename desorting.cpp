#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
void solve(int n,vector<int> &v){
    int op=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(v[i]<=v[i+1]){
            int dif=v[i+1]-v[i];
            int val=dif/2+1;
            op=min(op,val);

        }
        else{
            op=0;
        }
    }
    cout<<op<<endl;
   
   
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        solve(n,a);
    }


}
