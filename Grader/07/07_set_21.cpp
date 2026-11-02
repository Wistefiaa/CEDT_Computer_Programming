#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> num;
    int k, temp, count=0;
    cin>>k;
    while(cin>>temp){
        num.insert(temp);
    }
    for(auto it = num.begin(); it != num.end(); ++it){
        int search = k-*it;
        if(*it>=search) break;
        auto itr = num.find(search);
        if(itr!=num.end()){
            count++;
        }
    }
    cout<<count;
    return 0;
}