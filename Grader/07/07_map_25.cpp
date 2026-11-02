#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, vector<string>> data;
    vector<string> order;
    bool check = false;
    string s, in, target;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
        cin>>s;
        order.push_back(s);
        while(cin>>in){
            if(in=="*") break;        
            data[s].push_back(in);
        }
    }
    cin>>target;
    for(int i=0; i<order.size(); ++i){
        if(order[i]==target) continue;
        else{
            for(auto I:data[target]){
                for(auto J:data[order[i]]){
                    if(J==I){
                        cout<<">> "<<order[i]<<'\n';
                        check = true;
                        goto a;
                    }
                }
            }
            a:
        }
    }
    if(!check) cout<<">> Not Found";
    return 0;
}