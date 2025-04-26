#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
void solve(int n,vector<int> &a,vector<string> &s){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    if(sum%2==0){
        s.push_back("YES");
    }
    else{
        s.push_back("NO");
    }
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> s;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        solve(n,a,s);
        
    }
    for(auto i:s){
        cout<<i<<endl;
    }


}
