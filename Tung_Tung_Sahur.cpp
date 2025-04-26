#include <iostream>
#include <string>
using namespace std;

bool canMatch(const string &p, const string &s) {
    int i = 0, j = 0;
    int n = p.size(), m = s.size();

    while (i < n && j < m) {
        if (p[i] != s[j]) return false;

        // Count how many same characters in s
        int count = 1;
        while (j + 1 < m && s[j + 1] == s[j]) {
            count++;
            j++;
        }

        // Move pointers
        if (count == 1 || count == 2) {
            i++;
            j++;
        } else {
            return false;  // A hit can't sound 3 or more times
        }
    }

    return i == n && j == m;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<bool> res;

    int t;
    cin >> t;

    while (t--) {
        string p, s;
        cin >> p >> s;

        if (canMatch(p, s)) {
            res.push_back(true);
        } else {
            res.push_back(false);
        }
    }
    for(int i=0;i<res.size();i++){
        if(res[i]==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
