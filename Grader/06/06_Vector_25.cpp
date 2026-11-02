#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<string, string>> v;
    string id, grade, upgrade;
    while(cin>>id){
        if(id=="q")break;
        cin>>grade;
        v.push_back(make_pair(id, grade));
    }  
    while(cin>>upgrade){
        for(int i=0; i<v.size(); ++i){
            if(v[i].first==upgrade){
                if(v[i].second=="B"||v[i].second=="C"||v[i].second=="D"){
                    v[i].second+="+";
                }
                else if(v[i].second=="B+") v[i].second="A";
                else if(v[i].second=="C+") v[i].second="B";
                else if(v[i].second=="D+") v[i].second="C";
                else if(v[i].second=="F") v[i].second="D";
            }
        }
    }
    for(int i=0; i<v.size(); ++i){
        cout<<v[i].first<<" "<<v[i].second<<'\n';
    }
    
    return 0;
}