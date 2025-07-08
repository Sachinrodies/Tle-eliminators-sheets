#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

using ll = long long;

void processTestCase() {
    int numCircles;
    cin >> numCircles;

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    vector<int> radii(numCircles);
    int totalRadius = 0;
    int largestRadius = 0;

    for (int i = 0; i < numCircles; ++i) {
        cin >> radii[i];
        totalRadius += radii[i];
        largestRadius = max(largestRadius, radii[i]);
    }

    int dx = x1 - x2;
    int dy = y1 - y2;
    ll distanceSquared = 1LL * dx * dx + 1LL * dy * dy;

    int outerRadius = totalRadius;
    int innerRadius = 0;

    if (numCircles > 0) {
        int remaining = totalRadius - largestRadius;
        innerRadius = max(0, largestRadius - remaining);
    }

    ll minRadiusSquared = 1LL * innerRadius * innerRadius;
    ll maxRadiusSquared = 1LL * outerRadius * outerRadius;

    if (distanceSquared >= minRadiusSquared && distanceSquared <= maxRadiusSquared) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        processTestCase();
    }

    return 0;
}
