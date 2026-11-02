#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, double> item;
    map<string, double> sales;
    int n, m, pieces;
    double in, max = 0, sum = 0;
    bool check = false;
    string s;
    cin>>n;
    for(int i=0; i<n; ++i){
        cin>>s>>in;
        item[s] = in;
        sales[s] = 0;
    }
    cin>>m;
    for(int i=0; i<m; ++i){
        cin>>s;
        cin>>pieces;
        if(item[s]!=0){
            check = true;
            sales[s] += item[s]*pieces;
            sum += item[s]*pieces;
        }
    }
    vector<pair<string, double>> result(sales.begin(), sales.end());
    vector<string> name_max;
    for(int i=0; i<result.size(); ++i){
        if(result[i].second>max){
            name_max.clear();
            max = result[i].second;
            name_max.push_back(result[i].first);
        }
        else if(result[i].second==max){
            name_max.push_back(result[i].first);
        }
    }
    if(check){
        cout<<"Total ice cream sales: "<<sum<<'\n';
        cout<<"Top sales: ";
        for(auto I:name_max){
            cout<<I<<' ';
        }
    }
    else{
        cout<<"No ice cream sales";
    }
    return 0;
}