#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <map>

#include <algorithm>
#include <cmath>


using namespace std;

int solve(int a,int b,int c) {
    int m=-1;
    for(int i=0;i<3;i++){
        if(i==0){
            if((2*b-c)%a==0){
                m=(2*b-c)/a;

            }
            
            if(m>0){
                break;
            }
        }
        if(i==1){
             if((a+c)%(2*b)==0){
                 m=(a+c)/(2*b);

            }

           
              if(m>0){
                break;
            }
        }
        if(i==2){
            if((2*b-a)%c==0){
                m=(2*b-a)/c;

            }
           
              if(m>0){
                break;
            }

        }
    }
  
    if(m<=0){
        return 0;
    }
    return 1;
  
    
     
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;
   vector<int>ans;

    while (testCases--) {
        int a,b,c;
        cin>>a>>b>>c;
        ans.push_back(solve(a,b,c));
        
       

      
       
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
