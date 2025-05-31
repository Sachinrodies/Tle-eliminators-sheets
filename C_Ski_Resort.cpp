#include <iostream>
#include <vector>
#include <cmath>
#include<stack>
#include <string>
#include<map>
#include<queue>
#include <algorithm>


using namespace std;

#define ll long long
#define P pair<ll,ll>

void solve() {
   ll n,k,q;
   cin>>n>>k>>q;
   vector<ll> a(n);
   vector<ll>b(n,0);
   for(int i=0;i<n;i++){
         cin >> a[i];
         if(a[i]<=q){
            b[i]=1;
         }

   }
   //count the subarray whose sum is >=k;
   int left=0, right=0;
   ll count=0;

   while(left<n && right<n){
       if(b[right]==1){
        left=right;
        int count_ones=0;
        while(b[right]==1 && right<n){
            count_ones++;
            right++;
            
        }
        if(count_ones-k+1>0){
            count+=(count_ones-k+1)*(count_ones-k+2)/2; // sum of first n natural numbers formula

        }
       }
         else{
              right++;
         }
    
   }
   cout<< count << "\n";
   

  

  

   
    
    
     
   
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}