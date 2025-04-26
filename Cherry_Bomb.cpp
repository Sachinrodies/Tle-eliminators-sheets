#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

bool isConsistentSum(const vector<long long>& a, const vector<long long>& b, long long x, long long k) {
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        if (b[i] == -1) {
            long long possible_b = x - a[i];
            if (possible_b < 0 || possible_b > k) {
                return false;
            }
        } else {
            if (a[i] + b[i] != x) {
                return false;
            }
        }
    }
    return true;
}

long long countValidX(const vector<long long>& a, long long k) {
    long long minX = *max_element(a.begin(), a.end());
    long long maxX = LLONG_MAX;

    for (auto ai : a) {
        maxX = min(maxX, ai + k);
    }

    if (minX > maxX) return 0;
    return maxX - minX + 1;
}

long long solveTestCase() {
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n), b(n);
    for (auto& ai : a) cin >> ai;
    for (auto& bi : b) cin >> bi;

    bool hasKnownB = false;
    long long targetSum = 0;

    for (int i = 0; i < n; ++i) {
        if (b[i] != -1) {
            targetSum = a[i] + b[i];
            hasKnownB = true;
            break;
        }
    }

    if (hasKnownB) {
        return (isConsistentSum(a, b, targetSum, k) ? 1 : 0);
    } else {
        return countValidX(a, k);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;
    
    vector<long long> answers(testCases);
    
    for (int i = 0; i < testCases; ++i) {
        answers[i] = solveTestCase();
    }
    
    for (auto ans : answers) {
        cout << ans << '\n';
    }
    
    return 0;
}
