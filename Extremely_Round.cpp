#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
using namespace std;
vector<int> rounded;
bool check(long long val){
    int count_digits=0;
    int count_zeros=0;
    while(val>0){
        int rem=val%10;
        if(rem==0){
            count_zeros++;
        }
        count_digits++;
        val/=10;
    }
    return count_zeros==count_digits-1;
}
    
    

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=1;i<=999999;i++){
        if(check(i)){
            rounded.push_back(i);
        }
    }
    vector<int> s;
    int t;
    cin>>t;
    while(t--){
        long long  n;
        cin>>n;
        long long count=0;
        for(int i=0;i<rounded.size();i++){
            if(rounded[i]<=n){
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;

       
        
        
    }
    return 0;
   


}
