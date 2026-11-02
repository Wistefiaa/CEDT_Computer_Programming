#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v, out;
    int in, count=0;
    while(cin>>in){
        v.push_back(in);
    }
    sort(v.begin(), v.end());
    out.push_back(v[0]);
    for(int i=1; i<v.size(); ++i){
        if(v[i]!=v[i-1]){
            out.push_back(v[i]);
            count+=1;
        }
    }
    count++;
    cout<<count<<'\n';
    if(out.size()>10){
        for(int i=0; i<10; ++i){
            cout<<out[i]<<' ';
        }
    }
    else{
        for(int i=0; i<out.size(); ++i){
            cout<<out[i]<<' ';
        }
    }
    
    return 0;
}