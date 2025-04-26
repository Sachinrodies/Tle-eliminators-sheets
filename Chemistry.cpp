#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <set>
#include <utility>
using namespace std;

int solve(int n, int k, unordered_map<char, int> mp, string s) {
    int remaining = n - k;
    if (remaining == 1) {
       return 1;
    }

    int pairs_required = remaining / 2;
    int count = 0;
    for (auto i : mp) {
        count += i.second / 2;
    }

    if (count >= pairs_required) {
       return 1;
    } else {
        return 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>ans;

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        unordered_map<char, int> mp;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        ans.push_back(solve(n, k, mp, s));
    }
    for(auto i:ans){
        if(i==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
