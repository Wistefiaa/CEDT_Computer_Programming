#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, add;
    double n;
    vector<string> product;
    vector<double> price, income;
    while(cin>>s){
        if(s=="END"){
            break;
        }
        cin>>n;
        product.push_back(s);
        price.push_back(n);
        income.push_back(0.0);
    }
    while(cin>>add){
        for(int i=0; i<product.size(); ++i){
            if(add==product[i]){
                income[i] += price[i];
                break;
            }
        }
    }
    vector<pair<double, string>> output;
    for(int i=0; i<income.size(); ++i){
        if(income[i]!=0.0){
            output.push_back(make_pair(-income[i], product[i]));
        } 
    }
    sort(output.begin(), output.end());
    if(output.empty()){
        cout<<"No Sales";
        return 0;
    }
    else if(output.size()>=3){
        for(int i=0; i<3; ++i){
            cout<<output[i].second<<" "<<-output[i].first<<'\n';
        }
    }
    else{
        for(int i=0; i<output.size(); ++i){
            cout<<output[i].second<<" "<<-output[i].first<<'\n';
        }
    }
    return 0;
}