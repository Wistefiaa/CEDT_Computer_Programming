#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool check = false;
    string s;
    getline(cin, s);
    for(int i=0; i<s.length(); ++i){
        if(s[i]=='('){
            check = true;
            s[i] = '[';
        }
        else if(s[i]==')'){
            check = true;
            s[i] = ']';
        }
        else if(s[i]=='['){
            check = true;
            s[i] = '(';
        }
        else if(s[i]==']'){
            check = true;
            s[i] = ')';
        }
    }   
    cout<<s;
    
    return 0;
}