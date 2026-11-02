#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int HP_P, HP_E, E_POW, P_POW, P_DEF;
    bool buff_B = false;
    int n, m, count = 1;
    cin>>HP_P>>HP_E;
    cin>>n>>m;
    char array[n][m];
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cin>>array[i][j];
        }
    }
    while(HP_E>0&&HP_P>0){
        for(int i=0; i<n; ++i){
            E_POW = count*5;
            P_POW = 0;
            P_DEF = 0;
            for(int j=0; j<m; ++j){
                char c = array[i][j];
                if(c=='S'){
                    if(buff_B){
                        P_POW = P_POW + 6*1.5;
                        buff_B = false;
                    }
                    else P_POW += 6;
                }
                else if(c=='B'){
                    if(buff_B){
                        P_POW = P_POW + 8*1.5;
                        buff_B = false;
                    }
                    else P_POW += 8;
                    buff_B = true;
                }
                else if(c=='W'){
                    P_POW += 3;
                    E_POW = E_POW * 0.75;
                }
                else if(c=='D'){
                    P_DEF += 5;
                }
            }
            HP_E -= P_POW;
            int damage = P_DEF-E_POW;
            if (HP_E <= 0) break;
            if(damage<0){
                HP_P += damage;
            }
            if (HP_P <= 0) break;
            count++;
        }    
    }
    if(HP_E <= 0) cout<<"\"You Win :D\"";
    else cout<<"\"You Lose D:\"";
    return 0;
}