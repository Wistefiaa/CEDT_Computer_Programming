#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string song, artist, genre, time;
    map<string, int> sumtime;
    while(cin>>song, cin>>artist, cin>>genre, cin>>time){
        int pos = time.find(':');
        int minutes = stoi(time.substr(0,pos));
        int seconds = stoi(time.substr(pos+1));
        sumtime[genre] += minutes*60+seconds;
    }
    vector<pair<string, int>> result(sumtime.begin(), sumtime.end());
    sort(result.begin(), result.end(), [](const auto &a, const auto &b){
        return a.second>b.second;
    });
    if(result.size()>=3){
        for(int i=0; i<3; ++i){
            cout<<result[i].first<<" --> "<< result[i].second/60 <<":"<<result[i].second%60<<'\n';
        }
    }
    else{
        for(int i=0; i<result.size(); ++i){
            cout<<result[i].first<<" --> "<< result[i].second/60 <<":"<<result[i].second%60<<'\n';
        }
    }
    return 0;
}