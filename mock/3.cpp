#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long int result =0;
    string in, s_int="";
    cin>>n; 
    while(cin>>in){
        for(int i=0; i<in.length(); ++i){
            if(!isalpha(in[i])){
                s_int += in[i];
            }
        }
        result += stoi(s_int);
        s_int = "";
    }
    result *= n;
    cout<<result;
    return 0;
}