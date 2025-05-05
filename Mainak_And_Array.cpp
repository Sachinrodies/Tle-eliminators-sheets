#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
int solve(int n,vector<int> &a){
    int maxVal=0;;
    //Fixig the first element ;
    for(int i=1;i<n;i++){
        maxVal = max(maxVal,(a[i] - a[0]));

    }
    //Fixing the last element;
    for(int i=n-2;i>=0;i--){
        maxVal = max(maxVal,(a[n-1] - a[i]));
    }
    for(int i=0;i<n-1;i++){
        maxVal = max(maxVal,(a[i] - a[i+1]));
    }
    return maxVal;
    
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    vector<long long> ans;
    cin >> t;
    
 
    
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ans.push_back(solve(n,a));
        

       
       
    }
    for(int i:ans){
        cout<<i<<endl;
    }
    
   
    return 0;


}
