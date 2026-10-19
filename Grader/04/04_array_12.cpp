#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string key[10] = {"Robert", "William", "James", "John", "Margaret", "Edward", "Sarah", "Andrew", "Anthony", "Deborah"};
    string value[10] = {"Dick", "Bill", "Jim", "Jack", "Peggy", "Ed", "Sally", "Andy", "Tony", "Debbie"};
    int n;
    string in;
    cin>>n;
    for(int i=0; i<n; ++i){
        bool check = false;
        cin>>in;
        for(int j=0; j<10; ++j){
            if(in==key[j]){
                cout<<value[j]<<'\n';
                check = true;
            }
            else if(in==value[j]){
                cout<<key[j]<<'\n';
                check = true;
            }
        }
        if(!check) cout<<"Not found \n";
    }
    
    return 0;
}