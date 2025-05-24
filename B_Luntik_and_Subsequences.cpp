#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;
        vector<ll> a(n);

        int count_0 = 0, count_1 = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) count_0++;
            if (a[i] == 1) count_1++;
        }

       
        ll result = count_1 * (1LL << count_0); 
        cout << result << endl;
    }

    return 0;
}

