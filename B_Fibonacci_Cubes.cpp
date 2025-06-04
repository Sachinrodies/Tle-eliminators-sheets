#include <iostream>
#include <vector>
#include <array>
#include <set>
#include <algorithm>
#include <functional>
#include <climits>

using namespace std;

#define ll long long
#define ar3 array<int, 3>

const int MAX_F = 10;
const int MAX_LEN = 150;

vector<vector<vector<vector<int>>>> layouts;
int fibonacci[MAX_F];

bool fitLayout(const vector<int>& line, int w, int h) {
    int currentH = 0, currentW = 0, rowH = 0;
    for (int side : line) {
        if (side > w || side > h) return false;
        if (currentW + side <= w) {
            currentW += side;
            rowH = max(rowH, side);
        } else {
            currentH += rowH;
            if (currentH + side > h) return false;
            currentW = side;
            rowH = side;
        }
    }
    return currentH + rowH <= h;
}

void buildLayouts() {
    layouts.assign(MAX_F + 1, vector<vector<vector<int>>>(MAX_LEN + 1));
    for (int k = 2; k <= MAX_F; ++k) {
        fibonacci[0] = 1;
        fibonacci[1] = 2;
        for (int i = 2; i < k; ++i) {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }

        int all = (1 << k) - 1;
        int maxFib = fibonacci[k - 1];

        vector<int> sums(1 << k);
        for (int mask = 1; mask <= all; ++mask) {
            int bit = __builtin_ctz(mask & -mask);
            sums[mask] = sums[mask ^ (1 << bit)] + fibonacci[bit];
        }

        vector<int> minSteps(1 << k);
        for (int height = 1; height <= MAX_LEN; ++height) {
            if (height < maxFib) continue;
            minSteps[0] = 0;
            for (int mask = 1; mask <= all; ++mask) {
                if (sums[mask] <= height) {
                    minSteps[mask] = 1;
                } else {
                    int res = k + 1;
                    for (int sub = (mask - 1) & mask; sub; sub = (sub - 1) & mask) {
                        if (sums[sub] <= height) {
                            res = min(res, minSteps[mask ^ sub] + 1);
                        }
                    }
                    minSteps[mask] = res;
                }
            }

            int parts = minSteps[all];
            if (parts > k) continue;

            vector<vector<int>> validCombos(1 << k);
            for (int mask = 1; mask <= all; ++mask) {
                int bit = __builtin_ctz(mask & -mask);
                int rest = mask ^ (1 << bit);
                for (int sub = rest;; sub = (sub - 1) & rest) {
                    int combined = sub | (1 << bit);
                    if (sums[combined] <= height) {
                        validCombos[mask].push_back(combined);
                    }
                    if (sub == 0) break;
                }
            }

            set<vector<int>> possibleLayouts;
            vector<int> current;

            function<void(int, int)> explore = [&](int left, int bins) {
                if (bins == 1) {
                    if (sums[left] <= height) {
                        int last = 31 - __builtin_clz(left);
                        current.push_back(fibonacci[last]);
                        auto temp = current;
                        sort(temp.rbegin(), temp.rend());
                        possibleLayouts.insert(temp);
                        current.pop_back();
                    }
                    return;
                }
                for (int sub : validCombos[left]) {
                    int val = 31 - __builtin_clz(sub);
                    current.push_back(fibonacci[val]);
                    explore(left ^ sub, bins - 1);
                    current.pop_back();
                }
            };

            explore(all, parts);
            auto& result = layouts[k][height];
            result.reserve(possibleLayouts.size());
            for (auto& item : possibleLayouts) {
                result.push_back(item);
            }
        }
    }
}

void checkBoxes() {
    int n, m;
    cin >> n >> m;
    vector<ar3> cubes(m);
    for (int i = 0; i < m; ++i) {
        cin >> cubes[i][0] >> cubes[i][1] >> cubes[i][2];
    }

    vector<int> seq(n);
    seq[0] = 1;
    if (n >= 2) seq[1] = 2;
    for (int i = 2; i < n; ++i) {
        seq[i] = seq[i - 1] + seq[i - 2];
    }
    int largest = seq[n - 1];

    string result;
    for (int i = 0; i < m; ++i) {
        int dim[3] = {cubes[i][0], cubes[i][1], cubes[i][2]};
        bool success = false;
        for (int j = 0; j < 3 && !success; ++j) {
            int h = dim[j];
            if (h < largest) continue;
            int w1 = dim[(j + 1) % 3], w2 = dim[(j + 2) % 3];
            auto& layoutsHere = layouts[n][h];
            if (layoutsHere.empty()) continue;
            for (auto& line : layoutsHere) {
                if (fitLayout(line, w1, w2) || fitLayout(line, w2, w1)) {
                    success = true;
                    break;
                }
            }
        }
        result += (success ? '1' : '0');
    }
    cout << result << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    buildLayouts();
    int t;
    cin >> t;
    while (t--) {
        checkBoxes();
    }
}
