#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    for(int i=0; i<s.length(); ++i){
        if((s[i]>='A'&&s[i]<='Z')&&i!=0){
            cout<<", ";
            cout<<s[i];
        }
        else if(i!=0&&isdigit(s[i])&&!isdigit(s[i-1])){
            cout<<", ";
            cout<<s[i];
        }
        else if(i!=0&&islower(s[i])&&isdigit(s[i-1])){
            cout<<", ";
            cout<<s[i];
        }
        
        else cout<<s[i];
    }   
    
    return 0;
}