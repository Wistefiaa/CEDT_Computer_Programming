#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, vector<string>> animal;
    vector<string> types;
    string name, type;
    while(cin>>name, cin>>type){
        animal[type].push_back(name);
        if(types.size()==0||find(types.begin(), types.end(), type)==types.end()){
            types.push_back(type);
        }
    }
    for(auto k:types){
        cout<<k<<": ";
        for(auto n:animal[k]){
            cout<<n<<' ';
        }
        cout<<'\n';
    }
    
    return 0;
}