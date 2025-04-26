#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
void check(string s){
    int min_b=0,count=0;
    for(char c:s){
        if(c=='0'){
            count++;
        }
        else{
            min_b=max(min_b,count+1);
        }
    }
    cout<<s.size()-min_b<<endl;
   
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        check(s);
       
    }


}
