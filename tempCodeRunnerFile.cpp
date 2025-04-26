#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Function to check if a given sum 'x' is consistent with all pairs (a[i], b[i])
// Returns true if for all i:
// - If b[i] is known (!= -1), then a[i] + b[i] must equal x
// - If b[i] is unknown (== -1), then x - a[i] must be between 0 and k
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

// Function to count the number of valid sums 'x' when all b[i] are unknown
// Valid x must satisfy: max(a) <= x <= min(a[i] + k)
long long countValidX(const vector<long long>& a, long long k) {
    // Minimum possible x is the maximum value in array a
    long long minX = *max_element(a.begin(), a.end());
    // Maximum possible x is the minimum of (a[i] + k) for all i
    long long maxX = LLONG_MAX;

    for (auto ai : a) {
        maxX = min(maxX, ai + k);
    }

    if (minX > maxX) return 0;
    return maxX - minX + 1;
}

long long solveTestCase() {
    // Read input
    int n;              // Number of elements
    long long k;        // Maximum allowed value for b[i]
    cin >> n >> k;

    vector<long long> a(n), b(n);  // Arrays a and b
    for (auto& ai : a) cin >> ai;
    for (auto& bi : b) cin >> bi;

    // Check if we have any known b[i] value
    bool hasKnownB = false;
    long long targetSum = 0;

    // Find the first known b[i] to determine the target sum
    for (int i = 0; i < n; ++i) {
        if (b[i] != -1) {
            targetSum = a[i] + b[i];
            hasKnownB = true;
            break;
        }
    }

    // If we have a known b[i], check if that sum is consistent
    // Otherwise, count all possible valid sums
    if (hasKnownB) {
        return (isConsistentSum(a, b, targetSum, k) ? 1 : 0);
    } else {
        return countValidX(a, k);
    }
}

int main() {
    // Optimize input/output
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Read number of test cases
    int testCases;
    cin >> testCases;
    
    // Store answers in a vector
    vector<long long> answers(testCases);
    
    // Process each test case and store the answer
    for (int i = 0; i < testCases; ++i) {
        answers[i] = solveTestCase();
    }
    
    // Print all answers at once
    for (auto ans : answers) {
        cout << ans << '\n';
    }
    
    return 0;
}
