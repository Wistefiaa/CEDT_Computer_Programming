#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    while(getline(cin, s)){
        string result = "";
        bool in_punct = false;
        if(s.empty()){
            cout<<'\n';
            continue;
        }
        char special_char = s.back();
        for(int i=0; i<s.length(); ++i){
            if(s[i]==special_char){
                in_punct = !in_punct;
            }
            else if(in_punct){
                result += s[i];
            }
        }
        cout<<result<<'\n';
    }
    return 0;
}