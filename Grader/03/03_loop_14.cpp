#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string sol, s;
    int score =0;
    getline(cin, sol);
    getline(cin, s);
    if(sol.length()!= s.length()){
        cout<<"Incomplete answer";
    }
    else{
        for(int i=0; i<s.length(); ++i){
            if(s[i]==sol[i]){
                score ++;
            }
        }
        cout<<score;
    }
    
    return 0;
}