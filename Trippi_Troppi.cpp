#include<iostream>
#include<vector>
using namespace std;
void solve(string s1,string s2,string s3){
    string res="";
    
        res+=s1[0];
        res+=s2[0];
        res+=s3[0];
    
    cout<<res<<endl;
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<string>ans;
    while(t--){
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        string res="";
        res+=s1[0];
        res+=s2[0];
        res+=s3[0];
        ans.push_back(res);
       
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;

}