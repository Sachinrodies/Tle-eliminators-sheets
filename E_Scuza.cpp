#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <set>
#include <unordered_map>
#include <map>
using namespace std;

#define ll long long
int findIndexLessThanOrEqual(const vector<ll>& arr, ll x) {
    int left = 0, right = arr.size() - 1;
    int answer = -1; // if no such index exists

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= x) {
            answer = mid;      // possible answer, but go right for greater index
            left = mid + 1;
        } else {
            right = mid - 1;   // too large, go left
        }
    }

    return answer;
}

void solve()
{
    int n,q;
    cin >> n >> q;
    vector<ll> a(n),b(q);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<q;i++){
        cin >> b[i];
    }

    vector<ll> prefix(n, 0);
    vector<ll> prefixMaxArray(n);
    prefixMaxArray[0] = a[0];
   

   
    prefix[0] = a[0];
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1] + a[i];
        prefixMaxArray[i] = max(prefixMaxArray[i-1], a[i]);
    }


   for(int i=0;i<q;i++){
        int index = findIndexLessThanOrEqual(prefixMaxArray, b[i]);
        if(index == -1) {
            cout<<0<< " ";
        } else {
            cout<< prefix[index] << " ";
           
        }
   

    
   }

   
    cout<< endl;

    


    
    
    



   
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
