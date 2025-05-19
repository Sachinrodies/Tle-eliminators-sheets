#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <map>

#include <algorithm>
#include <cmath>


using namespace std;

int solve(int n, vector<long long> &arr) {
    if(n==1){
        return 0;
    }
    map<long long ,int>mp;
    for(int i:arr){
        mp[i]++;
    }
    if(mp.size()==1){
        return 0;
    }
    int mostFrequent=0;
    int maxCount=0;
    for(auto i:mp){
        if(i.second>maxCount){
            maxCount=i.second;
            mostFrequent=i.first;
        }
    }
    int count=0;
    while(mp[mostFrequent]<n){
        count++;
        if(mp[mostFrequent]*2<=n){
            count+=mp[mostFrequent];

            mp[mostFrequent]*=2;

        }
        else{
            count+=(n-mp[mostFrequent]);
            mp[mostFrequent]=n;

        }
        
        
      
    }
    return count;
    
     
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;
   vector<int>ans;

    while (testCases--) {
        int n;
        cin>>n;
        vector<long long>a(n);
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
