#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string goal, s = "-", input;
    int count=0;
    getline(cin, goal);
    getline(cin, input);
    s += input;
    s += "-";
    for(int i=1; i<s.length()-goal.length()+1; i++){
        string temp = s.substr(i, goal.length());
        if(temp==goal && !isalpha(s[i-1]) && !isalpha(s[i+goal.length()])){
            count ++;
        }
    }
    cout<<count;
    
    return 0;
}