#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;

int computeGCD(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void processCase() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int &x : nums) cin >> x;

    int g = nums[0];
    for (int i = 1; i < n; ++i) {
        g = computeGCD(g, nums[i]);
    }

    int countEqualG = 0;
    for (int i = 0; i < n; ++i) {
        if (nums[i] == g) ++countEqualG;
    }

    if (countEqualG > 0) {
        cout << (n - countEqualG) << '\n';
        return;
    }

    set<int> uniqueSet(nums.begin(), nums.end());
    vector<int> uniqueVals(uniqueSet.begin(), uniqueSet.end());
    int maxValue = *max_element(uniqueVals.begin(), uniqueVals.end());

    vector<int> dist(maxValue + 1, -1);
    queue<int> q;

    for (int val : uniqueVals) {
        dist[val] = 0;
        q.push(val);
    }

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (current == g) break;

        for (int other : uniqueVals) {
            int d = computeGCD(current, other);
            if (dist[d] == -1) {
                dist[d] = dist[current] + 1;
                q.push(d);
            }
        }
    }

    int totalOps = dist[g] + (n - 1);
    cout << totalOps << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        processCase();
    }
    return 0;
}
