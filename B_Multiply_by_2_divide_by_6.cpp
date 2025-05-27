#include <iostream>
#include <vector>
#include <cmath>
#include<stack>
#include <string>

using namespace std;

#define ll long long

void solve() {
    ll n;
    cin>>n;
    int count_three=0;
    int count_two=0;
    while(n%2==0){
        count_two++;
        n/=2;
    }
    while(n%3==0){
        count_three++;
        n/=3;
    }
    if(n>1||count_two>count_three) {
        cout<<-1<<"\n";
        return;
    }
    cout<<(count_three-count_two)+count_three<<"\n";
   

   
 
   
   

  

    
    
    
   
   
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
