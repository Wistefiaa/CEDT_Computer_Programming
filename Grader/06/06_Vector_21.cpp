#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> words;
    string s,result;
    cin>>s;
    string current = s;
    current+='$';
    words.push_back(current);
    for(int i=0; i<s.length(); ++i){
        char front = current[0];
        string left = current.substr(1);
        current = left+front;
        words.push_back(current);
    } 
    sort(words.begin(), words.end());
    for(auto i:words){
        cout<<i.back();
    }
    
    return 0;
}