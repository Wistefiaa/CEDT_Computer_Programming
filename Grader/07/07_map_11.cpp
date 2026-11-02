#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    string realname, nickname, name;
    map<string, string> Name;
    map<string, string> Nickname;
    cin>>n;
    for(int i=0; i<n; ++i){
        cin>>realname>>nickname;
        Name.insert({realname, nickname});
        Nickname.insert({nickname, realname});
    }
    cin>>m;
    for(int i=0; i<m; ++i){
        cin>>name;
        auto itr = Name.find(name);
        auto Nitr = Nickname.find(name);
        if(itr!=Name.end()){
            cout<<itr->second<<'\n';
        }
        else if(Nitr!=Nickname.end()){
            cout<<Nitr->second<<'\n';
        }
        else{
            cout<<"Not found\n";
        }
    }
    return 0;
}