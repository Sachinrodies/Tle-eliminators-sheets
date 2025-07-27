#include <iostream>
#include <string>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string ans = "";

    int i = 0;
    while (i < s.size()) {
        if (i + 2 < s.size()) {
            string sample = s.substr(i, 3);
            if (sample == "FFT") {
                ans += "TFF";
                i += 3;
                continue;
            } else if (sample == "NTT") {
                ans += "TTN";
                i += 3;
                continue;
            }
        }
        ans += s[i];
        i++;
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
