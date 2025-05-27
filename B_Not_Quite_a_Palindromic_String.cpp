#include <iostream>
#include <string>
using namespace std;

bool can_make_k_good_pairs(int n, int k, const string& s) {
    int zeros = 0, ones = 0;
    for (char c : s) {
        if (c == '0') zeros++;
        else ones++;
    }

    int half = n / 2;

    // Try all possible splits of k good pairs between 00 and 11
    for (int zero_pairs = 0; zero_pairs <= k; ++zero_pairs) {
        int one_pairs = k - zero_pairs;

        int zeros_needed = 2 * zero_pairs + (half - k); // good 00 pairs + bad pairs
        int ones_needed  = 2 * one_pairs + (half - k);  // good 11 pairs + bad pairs

        if (zeros_needed <= zeros && ones_needed <= ones) {
            return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        if (can_make_k_good_pairs(n, k, s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
