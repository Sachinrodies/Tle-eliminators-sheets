#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <vector>

#include <algorithm>
#include <cmath>


using namespace std;

int solve(string &s, string &t) {
    unordered_map<char,int>mp;
    for(char c:t){
        mp[c]++;
    }
    int n=s.size()-1;
    while(n>=0){
        if(mp.find(s[n])==mp.end()){
            s[n]='.';

        }
        else if(mp[s[n]]>0){
            mp[s[n]]--;

        }
        else if(mp[s[n]]==0){
            s[n]='.';
        }
        n--;
    }
    string result="";
    for(char c:s){
        if(c!='.'){
            result+=c;
        }
    }
     return result==t?1:0;
     
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;
   vector<int>ans;

    while (testCases--) {
        string s, t;
        cin >> s >> t;

       ans.push_back(solve(s, t));
       
    }
    for(int i:ans){
       if(i==1){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }

    return 0;
}
