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
    while(t--){
        int n;
        cin >> n;
        cout << (n * n) / 4 + 1 << "\n";
    }


}
