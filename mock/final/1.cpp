#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, key, ss;
    map<string, int> letter;
    int sum, n, value, last;
    cin>>s;
    cin>>n;
    for(int i=0; i<n; ++i){
        cin>>key>>value;
        letter.insert({key, value});
    }
    for(int i=0; i<s.length(); ++i){
        for(int j=i+1; j<s.length(); ++j){
            if(s[j]=='+'){

            }
        }
    }   
    
    return 0;
}