#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h;
    cin>>h;
    int b = 2*h-1;   
    for(int i=0; i<h; ++i){
        for(int j=0; j<b; ++j){
            if(i+j==h-1||j-i==h-1||i==h-1) cout<<'*';
            else if(j-i>h-1) cout<<' ';
            else cout<<'.';
        }
        cout<<'\n';
    }
    return 0;
}