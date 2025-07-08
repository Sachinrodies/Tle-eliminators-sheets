#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

#define ll long long





   
    
    


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,q;
    cin>>n>>q;
    vector<ll> a(51,n+1);
    for(int i=1;i<=n;i++){
        ll x;
        cin >> x;
        if(a[x] == n + 1) {
            a[x] = i; // Store the first occurrence of each card
        }
    
    }


    while(q--){
        ll b;
        cin>>b;
        ll pos=a[b];
        for(ll i=1;i<=50;i++){
            if(a[i]<pos){
                a[i]++;
            }
        }
        a[b] = 1; // Move the card to the top of the deck
        cout<<pos<<" ";
    }
    cout<<endl;
}
