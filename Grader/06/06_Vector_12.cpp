#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    vector<int> store;
    cin>>n;
    while(n!=1){
        store.push_back(n);
        if(n%2==0){
            n = n/2;
        }
        else{
            n = 3*n+1;
        }
    }   
    store.push_back(n);
    if(store.size()>15){
        for(int i=store.size()-15; i<store.size(); ++i){
            cout<<store[i];
            if(i!=store.size()-1){
                cout<<"->";
            }
        }
    }
    else{
        for(int i=0; i<store.size(); ++i){
            cout<<store[i];
            if(i!=store.size()-1){
                cout<<"->";
            }
        }
    }
    return 0;
}