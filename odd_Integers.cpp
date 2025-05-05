#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<string> ans;
    
    while(t--){
       long long n,q;
       cin>>n>>q;
   
       vector<long long >a(n);
       vector<long long> ans1;
       long long sum=0;
         for(int i=0;i<n;i++){
              cin>>a[i];
              sum+=a[i];
              ans1.push_back(sum);
         }
        for(int i=0;i<q;i++){
            long long l,r,k;
            cin>>l>>r>>k;
            long long val=(r-l+1)*k;
            long long sum1=ans1[r-1];
            if(l>1){
                sum1-=ans1[l-2];
            }
            long long val2=sum-sum1;
            val2+=val;
            if(val2%2==1){
                ans.push_back("YES");
            }
            else{
                ans.push_back("NO");
            }

           
        }
       
    }
    for(auto i:ans){
        cout<<i<<endl;
    }
    return 0;


}
