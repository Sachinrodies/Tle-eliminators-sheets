#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <map>

#include <algorithm>
#include <cmath>


using namespace std;
long long solve(long long x, long long n) {
   int parity = ((x % 2) + 2) % 2; // 0 if even, 1 if odd
    long long rem = n % 4;

    if (rem == 0) return x;

    if (rem == 1) return parity == 0 ? x - n : x + n;
    if (rem == 2) return parity == 0 ? x + 1 : x - 1;
    if (rem == 3) return parity == 0 ? x + n + 1 : x - (n + 1);
    return 0;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;
   vector<long long >ans;

    while (testCases--) {
        long long x,n;
        cin>>x>>n;
        ans.push_back(solve(x,n));

       

      
       
    }
    for(long long  i:ans){
      cout<<i<<endl;
    }
   

    return 0;
}
