#include<iostream>
#include<vector>
using namespace std;

void solve(int n, int m, int l, int r) {
  
    int length = m + 1;
    
 
   
    int l1, r1;
    

    int left_available = abs(l);
    int right_available = r;
    
  
    int left_houses = min(left_available, (length - 1) / 2);
    int right_houses = min(right_available, (length - 1) / 2);
    
   
    if (left_houses + right_houses < length - 1) {
        if (left_houses == left_available) {
            right_houses = length - 1 - left_houses;
        } else {
            left_houses = length - 1 - right_houses;
        }
    }
    
    l1 = -left_houses;
    r1 = right_houses;
    
    cout << l1 << " " << r1 << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        solve(n,m,l,r);
    }
    return 0;

}