#include <iostream>
using namespace std;

using ull = unsigned long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int cases;
    cin >> cases;
    while (cases--) {
        ull a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == 1) {
            cout << b << "\n";
        } else if (a & 1) {
            if (d <= a) cout << b << "\n";
            else cout << "-1\n";
        } else {
            if (a == 2) {
                cout << "-1\n";
            } else {
                ull res = b;
                while (true) {
                    bool valid = true;
                    for (int i = 0; i < 64; i++) {
                        ull bit = 1ULL << i;
                        if ((b & bit) && (res & bit)) {
                            res += bit;
                            res &= ~(bit - 1);
                            valid = false;
                            break;
                        }
                    }
                    if (valid) break;
                }
                if (res > c) {
                    cout << "-1\n";
                } else {
                    if (d <= a - 2) cout << b << "\n";
                    else cout << res << "\n";
                }
            }
        }
    }
    return 0;
}
