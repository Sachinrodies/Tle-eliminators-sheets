#include <iostream>
#include <string>

#include <unordered_map>
#include <vector>
#include <map>

#include <algorithm>
#include <cmath>


using namespace std;

int solve(string s,string pc){
   int oper=0;
   int j=1;
   for(int i=s.size()-1;i>=0;i--){
    if(j<0){
        break;
    }
    if(s[i]==pc[j]){
        j--;
    }else{
        oper++;
    }

   }
   if(j>=0){
    return INT_MAX;
   }
   return oper;
   

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;
 

    while (testCases--) {
        string s;
        cin>>s;
        int ans=INT_MAX;
        vector<string>possibleCase={"00","25","50","75"};
        for(string i:possibleCase){
            ans=min(ans,solve(s,i));


        }
        cout<<ans<<endl;

        
        
       

      
       
    }
   

    return 0;
}
