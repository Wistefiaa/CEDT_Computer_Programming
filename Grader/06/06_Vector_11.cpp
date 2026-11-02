#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> output;
    int in, count=0, n;
    cin>>n; // dump
    cin>>in;
    while(in!=-1){
        if(count%2==0){
            output.insert(output.end(), in);
        }
        else{
            output.insert(output.begin(), in);
        }
        count++;
        cin>>in;
    }   
    cout<<'[';
    for(int i=0; i<output.size(); ++i){
        cout<<output[i];
        if(i!=output.size()-1){
            cout<<", ";
        }
    }
    cout<<']';

    return 0;
}