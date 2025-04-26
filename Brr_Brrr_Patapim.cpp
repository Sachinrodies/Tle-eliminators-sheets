#include<iostream>
#include<string>
using namespace std;

void solve() {
    string p, s;
    cin >> p >> s;
    
    int i = 0, j = 0;
    int n = p.size(), m = s.size();
    
    while (i < n && j < m) {
        if (p[i] != s[j]) {
            cout << "NO\n";
            return;
        }
        
        // Check if we can expand current character
        if (j + 1 < m && s[j] == s[j + 1]) {
            j += 2;  // Take both characters
        } else {
            j += 1;  // Take single character
        }
        i++;
    }
    
    // Check if we've processed all characters
    if (i == n && j == m) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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