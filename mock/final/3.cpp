#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<string, int>> v;
    vector<pair<string, string>> best, worst;
    string name;
    int n, m, value, best_diff = INT_MAX, worst_diff = 0;
    cin>>n>>m;
    for(int i=0; i<n; ++i){
        cin>>name>>value;
        v.push_back(make_pair(name, value));
    }
    for(auto itr = v.begin(); itr!=v.end(); ++itr){
        for(auto citr = itr+1; citr!=v.end(); ++citr){
            if(abs(m-((*itr).second+(*citr).second))<best_diff){
                best_diff = abs(m-((*itr).second+(*citr).second));
                best.clear();
                best.push_back(make_pair((*itr).first, (*citr).first));
            }
            else if(abs(m-((*itr).second+(*citr).second))==best_diff){
                best.push_back(make_pair((*itr).first, (*citr).first));
            }
            if((abs(m-((*itr).second+(*citr).second))>worst_diff)){
                worst_diff = abs(m-((*itr).second+(*citr).second));
                worst.clear();
                worst.push_back(make_pair((*itr).first, (*citr).first));
            }
            else if(abs(m-((*itr).second+(*citr).second))==worst_diff){
                worst.push_back(make_pair((*itr).first, (*citr).first));
            }
        }
    }
    cout<<"Best Pair:\n";
    for(auto I:best){
        cout<<I.first<<' '<<I.second<<'\n';
    }
    cout<<"Worst Pair:\n";
    for(auto I:worst){
        cout<<I.first<<' '<<I.second<<'\n';
    }
    
    return 0;
}