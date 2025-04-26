#include<iostream>
#include <vector>
#include<string>
#include<algorithm>
#include<set>
#include<utility>
using namespace std;
vector<int> dx={-1,1,1,-1};
vector<int>dy={-1,-1,1,1};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long a,b,x_king,y_king,x_queen,y_queen;
        cin>>a>>b;
        cin>>x_king>>y_king;
        cin>>x_queen>>y_queen;
        set<pair<int,int>>kings_pos;
        set<pair<int,int>>queens_pos;
        for(int i=0;i<4;i++){
            kings_pos.insert({x_king+dx[i]*a,y_king+dy[i]*b});
            kings_pos.insert({x_king+dx[i]*b,y_king+dy[i]*a});
            queens_pos.insert({x_queen+dx[i]*a,y_queen+dy[i]*b});
            queens_pos.insert({x_queen+dx[i]*b,y_queen+dy[i]*a});

        }
        long long ans=0;
        for(auto i:kings_pos){
            if(queens_pos.find(i)!=queens_pos.end()){
                ans++;
            }
        }
        cout<<ans<<endl;

      
    }
    return 0;
   


}
