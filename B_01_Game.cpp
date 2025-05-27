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
    int zero_count = 0, one_count = 0;
    for(char c :s){
        if(c == '0') {
            zero_count++;
        } else {
            one_count++;
        }
    }
    int pairs = min(zero_count, one_count);
    if(pairs % 2 == 0) {
        cout << "NET" << endl;
    } else {
        cout << "DA" << endl;
    }
   
 
   
   

  

    
    
    
   
   
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
