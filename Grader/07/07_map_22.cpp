#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, double> exchange = {{"THB", 1}};
    int n, in, now;
    double currency;
    string country, trade, previous, result = "", current;
    cin>>n;
    for(int i=0; i<n; ++i){
        cin>>country>>currency;
        exchange[country] = currency;
    }
    cin>>in;
    cin.ignore();
    getline(cin, trade);
    stringstream ss(trade);
    now = in;
    previous = trade.substr(0,3);
    while(ss>>current){
        if(current == previous){
            result+=to_string(int(now));
        }
        else if(current!="THB"){
            now = int(now*exchange[previous]/exchange[current]);
            result+=to_string(now);
            previous = current;
        }
        else{
            now = int(now*exchange[previous]);
            result+=to_string(now);
            previous = "THB";
        }
        result+=' ';
        result+=current;
        result+=" -> ";
        
    }
    cout<<result.substr(0,result.size()-4);
    
    return 0;
}