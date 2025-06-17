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


using namespace std;

#define ll long long
#define P pair<char,int>

void solve()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  priority_queue<P,vector<P>,greater<P>> min_heap;
  for(int i=0;i<n;i++){
    min_heap.push({s[i],i});

  }
  for(int i=0;i<n;i++){
    char c=min_heap.top().first;
    int index=min_heap.top().second;
    if(s[i]==c && index==i){
        min_heap.pop();
    }
    else if(s[i]==c && index!=i){
        continue;
    }
    else{
        cout<<"YES"<<endl;
        cout<<i+1<<" "<<index+1<<endl;
        return;
    }
  }

  cout<<"NO"<<endl;




  
  
  
   

   
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
     solve();
    

    return 0;
}
