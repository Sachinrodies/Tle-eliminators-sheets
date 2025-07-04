#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <unordered_map>
#include <numeric>
#include <climits>
#include <map>
#include <unordered_set>

using namespace std;

#define ll long long


void solve()
{
    string s;
    cin>> s;
    set<char> unique_chars;
    int k;
    for(k=0;k<s.size();k++)
    {
       if(unique_chars.find(s[k]) == unique_chars.end())
       {
           unique_chars.insert(s[k]);
       }
       else
       {
           break;
       }
    }

    for(int j=k;j<s.size();j++){
        if(s[j] != s[j-k])
        {
            cout << "NO\n";
            return;
        }
    }
    cout<< "YES\n";

    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }

    return 0;
}
