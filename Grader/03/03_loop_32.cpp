#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s, check_last_r;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; ++i){
        int score = 0;
        getline(cin, s);
        if(s.length()==1&&s[0]=='R'){
            cout<<'1';
        }
        else if(s[0]=='R'){
            int i=0, j=1;
            while(i<s.length()){
                while(j<s.length()&&s[i]!=s[j]) j++;
                if(j==s.length()){
                    check_last_r = s.substr(s.length()-11);
                    if(check_last_r=="Y G N B P K"){
                        for(int k=i; k<s.length(); ++k){
                            if(s[k]=='R') score += 1;
                            else if(s[k]=='Y') score +=2;
                            else if(s[k]=='G') score +=3;
                            else if(s[k]=='N') score +=4;
                            else if(s[k]=='B') score +=5;
                            else if(s[k]=='P') score +=6;
                            else if(s[k]=='K') score +=7;
                        }
                    }
                    else{
                        cout<<"WRONG_INPUT /n";
                    }
                }
                else{
                    for(int k=i; k<j; k++){
                        if(s[k]=='R') score += 1;
                        else if(s[k]=='Y') score +=2;
                        else if(s[k]=='G') score +=3;
                        else if(s[k]=='N') score +=4;
                        else if(s[k]=='B') score +=5;
                        else if(s[k]=='P') score +=6;
                        else if(s[k]=='K') score +=7;
                    }
                }
                i = j;
                j = i+1;
            }
            cout<<score<<'\n';
        }
        else cout<<"WRONG_INPUT \n";
    } 
    
    return 0;
}