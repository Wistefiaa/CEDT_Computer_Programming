#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, first, last, last_word, mid;
    getline(cin, s);
    auto itr_space = s.find(" ");
    auto itr_back = s.find_last_of(" ");
    first = s[0]+s.substr(itr_back+2);
    last = s[itr_back+1]+s.substr(1, itr_space);
    mid = s.substr(itr_space+1, itr_back-itr_space);
    cout<<first<<" "<<mid<<last;
    return 0;
}