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

using namespace std;

#define ll long long
#define P pair<ll, ll>

void solve()
{
    int n;
    char c;

    cin >> n >> c;
    string s;
    cin >> s;
    if (c == 'g')
    {
        cout << 0 << endl;
    }
    else
    {
       int max_steps = 0;
       int index=-1;
       string new_s= s + s; 
       for(int i=2*n-1;i>=0;i--){
         if(new_s[i] == 'g')
        {
            index = i;
        }
        if(index!=-1 && new_s[i]== c){
            max_steps = max(max_steps, index-i);
           
            
        }
       
       }

        cout << max_steps << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}