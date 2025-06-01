#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <string>
#include <map>
#include <queue>
#include <algorithm>
#include <unordered_map>

using namespace std;

#define ll long long
#define P pair<ll, ll>

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    unordered_map<int, int> freq1;
    int i = 0, j = 0;
    while (j < n)
    {
        if (a[j] == a[i])
        {
            while (j < n && a[j] == a[i])
            {
                if (freq1.find(a[j]) == freq1.end())
                {
                    freq1[a[j]] = (j - i + 1);
                }
                else
                {
                    freq1[a[j]] = max(freq1[a[j]], (j - i + 1));
                }
                j++;
            }
            i = j;
        }
        else
        {
            j++;
        }
    }
   
    unordered_map<int, int> freq2;
    i = 0, j = 0;
    while (j < n)
    {
        if (b[j] == b[i])
        {
            while (j < n && b[j] == b[i])
            {
                if (freq2.find(b[j]) == freq2.end())
                {
                    freq2[b[j]] = (j - i + 1);
                }
                else
                {
                    freq2[b[j]] = max(freq2[b[j]], (j - i + 1));
                }
                j++;
            }
            i = j;
        }
    }
    int max_freq = 0;
    vector<int> ans;
    

    for(int i=0;i<n;i++){
        if(freq1.find(a[i])!=freq1.end() && freq2.find(a[i])!=freq2.end()){
            max_freq= max(max_freq, freq1[a[i]] + freq2[a[i]]);
        }
        else{
            ans.push_back(freq1[a[i]]);
        }
    }

    vector<int>result;
    for(int i=0;i<n;i++){
        if(freq1.find(a[i])!=freq1.end() && freq2.find(a[i])!=freq2.end()){
            result.push_back(freq1[a[i]] + freq2[a[i]]);
        }
        else{
            result.push_back(freq1[a[i]]);
        }
    }
    for(int i=0;i<n;i++){
        if(freq1.find(b[i])!=freq1.end() && freq2.find(b[i])!=freq2.end()){
           continue;
        }
        else{
            result.push_back(freq2[b[i]]);
        }
        
    }
    sort(result.begin(), result.end(), greater<int>());
    cout<< result[0] << "\n";





    

   

  
   
    

    

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