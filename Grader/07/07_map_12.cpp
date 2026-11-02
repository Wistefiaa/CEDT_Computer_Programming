#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, string> Number;
    map<string, string> Name;
    string s1, s2, num, search;
    int n, m;
    cin>>n;
    for(int i=0; i<n; ++i){
        cin>>s1>>s2>>num;
        Number.insert({s1+" "+s2, num});
        Name.insert({num, s1+" "+s2});
    }
    cin>>m;
    cin.ignore();
    for(int i=0; i<m; ++i){   
        getline(cin, search);
        auto itr1 = Number.find(search);
        auto itr2 = Name.find(search);
        if(itr1!=Number.end()){
            cout<<search<<" --> "<<itr1->second<<'\n';
        }
        else if(itr2!=Name.end()){
            cout<<search<<" --> "<<itr2->second<<'\n';
        }
        else{
            cout<<search<<" --> Not found\n";
        }
    }
    
    return 0;
}