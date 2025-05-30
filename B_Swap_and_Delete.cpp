#include <iostream>
#include <vector>
#include <cmath>
#include<stack>
#include <string>

using namespace std;

#define ll long long

void solve() {
    string s;
    cin>>s;
    int count1=0;
    int count0=0;
    for(char c : s) {
        if (c == '1') {
            count1++;
        } else {
            count0++;
        }
    }
    int count_le=0;
    for(int i=0;i<s.size();i++){
      
        if(s[i]=='1'){
            
            if(count0==0){
                break;
            }
            count0--;
            count_le++;
        }
        else{
             if(count1==0){
                break;
            }
           
            count1--;
            count_le++;
        }
    }
    cout<<s.size()-count_le<<"\n";

   
 
   
   

  

    
    
    
   
   
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
