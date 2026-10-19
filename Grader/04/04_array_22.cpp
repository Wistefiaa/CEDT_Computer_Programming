#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    vector<string> deck, top, bot, temp;
    cin>>n;
    string order;
    for(int i=0; i<n; ++i){
        string s;
        cin>>s;
        deck.push_back(s);
    }
    cin.ignore();
    getline(cin, order);
    for(int i=0; i<order.length(); ++i){
        if(order[i]=='C'){
            top.clear();
            bot.clear();
            temp.clear();
            for(int j=0; j<n/2; ++j){
                top.push_back(deck[j]);
                bot.push_back(deck[n/2+j]);
            }            
            temp.insert(temp.end(), bot.begin(), bot.end());
            temp.insert(temp.end(), top.begin(), top.end());
            deck = temp;
        }
        else if(order[i]=='S'){
            top.clear();
            bot.clear();
            temp.clear();
            for(int j=0; j<n/2; ++j){
                top.push_back(deck[j]);
                bot.push_back(deck[n/2+j]);
            }
            for(int j=0; j<deck.size(); ++j){
                if(j%2==0){
                    deck[j] == 
                }
            }

        }
    }

}