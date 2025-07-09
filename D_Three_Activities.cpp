#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

#define ll long long
vector<ll> maxIndex(vector<ll>& arr) {
    vector<pair<ll, ll>> indexedArr;
    for (int i = 0; i < arr.size(); i++) {
        indexedArr.push_back({arr[i], i});
    }
    sort(indexedArr.rbegin(), indexedArr.rend());
    vector<ll> result;
    for(int i=0;i<indexedArr.size();i++){
        result.push_back(indexedArr[i].second);
    }
    return result;
   
}

void solve(){
    int n;
    cin>> n;
    vector<ll>a(n),b(n),c(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    vector<ll>maxa=maxIndex(a);
    vector<ll>maxb=maxIndex(b);
    vector<ll>maxc=maxIndex(c);


    ll maxVal=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if((maxa[i]==maxb[j]) || (maxb[j]==maxc[k]) || (maxc[k]==maxa[i])){
                    continue; // Skip if any two indices are the same
                    
                }
                maxVal=max(maxVal, a[maxa[i]] + b[maxb[j]] + c[maxc[k]]);
            }
        }
    }
    cout<<maxVal << endl;

    
    
}





   
    
    


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
   int testCase;
   cin>>testCase;
   while(testCase--){
    solve();
   }
}
