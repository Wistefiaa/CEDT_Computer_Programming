#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char ref[10] = {'0','1','2','3','4','5','6','7','8','9'};
    string s, ans;
    cin>>s;
    for(int i=0; i<s.length(); ++i){
        if(isdigit(s[i])){
            for(int j=0; j<10; ++j){
                if(ref[j]==s[i]){
                    ref[j] = ' ';
                }
            }
        }
    }
    for(int i=0; i<10; ++i){
        if(ref[i]!=' '){
            ans+=ref[i];
        }
    }
    if(ans.length()==0) cout<<"None";
    else{
        for(int i=0; i<ans.length(); ++i){
            cout<<ans[i];
            if(i!=ans.length()-1){
                cout<<',';
            }
        }
    }   
    return 0;
}