#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
long long  solve(int n,vector<int> &a){
    if(n==1){
        return 0;
    }
    long long ans=0;
    long long prev=a[0];
    for(int i=1;i<n;i++){
        if(a[i]%2==a[i-1]%2){
            ans++;
            prev=a[i]*a[i-1];
        }
    }
    return ans;
    
  
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long > s;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        s.push_back(solve(n,a));
        
    }
    for(auto i:s){
        cout<<i<<endl;
    }


}
