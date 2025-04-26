#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include <numeric>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int solve(vector<int> &a){
    int n = a.size();
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(gcd(a[i], a[j]) <= 2){
                return 1; // Return 1 if we find a pair with gcd <= 2
            }
        }
    }
    return 0; // Return 0 if no such pair exists
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
       vector<int> a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       
       ans.push_back(solve(a));




       
        
    }
    for(auto i:ans){
       if(i==1){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }   


}
