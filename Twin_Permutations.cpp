#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

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
        for(int i=0;i<n;i++){
            cout<<n+1-a[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
    


}

