#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <set>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    set<ll> s;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    // Edge case: if n is 1, the answer is 0

    int i=0,r=n-1;
    while(i<=r){
        if(arr[i]== *s.begin() || arr[i]== *s.rbegin()) {
            s.erase(arr[i]);
            i++;
        } else if(arr[r]== *s.begin() || arr[r]==*s.rbegin()) {
            s.erase(arr[r]);
            r--;
        } else {
            cout<<i+1 << " " << r+1 << endl;
            return ;
        }
    }
    cout<<-1 << endl; // If no such indices found
    
    



   
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
}
