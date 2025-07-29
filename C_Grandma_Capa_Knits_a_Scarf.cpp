#include<iostream>
#include<vector>
#include<string>
#include<numeric>
#include<cmath>
#include<set>
using namespace std;
 #define ll long long 


 void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=INT_MAX;

   

    for(int i=0;i<26;i++){
        char c='a'+i;
        int j=0,k=n-1;
        int tem=0;
        bool isposs=true;
        while(j<k){
            if(s[j]==s[k]){
                j++;
                k--;
            }
            else{
                if(s[j]==c){
                    tem++;
                    j++;
                }
                else if(s[k]==c){
                    tem++;
                    k--;
                }
                else{
                   
                    isposs=false;
                    break;
                }
            }
        }
        if(!isposs){
            tem=INT_MAX;

        }
        count=min(count,tem);
    }
    if(count==INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<count<<endl;
    }

 }
 int main(){

    int testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;

 }