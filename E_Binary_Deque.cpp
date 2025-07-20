#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <set>
#include <unordered_map>
#include <map>
#include <iostream>
using namespace std;

#define ll long long


void solve()
{

   int n,s;
   cin>>n>>s;
   vector<int>a(n);
   ll total_sum=0;
   for(int i=0;i<n;i++){
    cin>>a[i];
    total_sum+=a[i];
   }

   if(total_sum<s){
    cout<<-1<<endl;

   }
   else if(total_sum==s){
    cout<<0<<endl;
    
   }

   else{
        int max_len=-1,currSum=0;
        int left=0,right=0;
        for(int right=0;right<n;right++){
            currSum+=a[right];
            while(currSum>s){
                currSum-=a[left];
                left++;
            }
            if(currSum==s){
                max_len=max(max_len,right-left+1);
            }
        }
        if(max_len==-1){
            cout<<-1<<endl;

        }
        else{
            cout<<n-max_len<<endl;
        }



   }







 
 

 


}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
}
