#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isBad(vector<int>& q) {
    if (q.size() < 5) return false;
    bool inc = true, dec = true;
    for (int i = q.size() - 5; i < q.size() - 1; ++i) {
        if (q[i] >= q[i+1]) inc = false;
        if (q[i] <= q[i+1]) dec = false;
    }
    return inc || dec;
}

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    int l = 0, r = n - 1;
    vector<int> q;
    string result;

    while (l <= r) {
        bool canTakeL = true, canTakeR = true;

      
        q.push_back(p[l]);
        if (isBad(q)) canTakeL = false;
        q.pop_back();

    
        q.push_back(p[r]);
        if (isBad(q)) canTakeR = false;
        q.pop_back();

        if (canTakeL && (!canTakeR || p[l] < p[r])) {
            result += 'L';
            q.push_back(p[l++]);
        } else {
            result += 'R';
            q.push_back(p[r--]);
        }
    }

    cout << result << '\n';
}


int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
