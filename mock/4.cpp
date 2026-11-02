#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, goal, sum=0;
    cin>>n>>goal;
    int array[n];
    for(int i=0; i<n; ++i){
        cin>>array[i];
        sum+=array[i];
    }
    for(int i=0; i<n; ++i){
        for(int j=1; j<n-1; ++j){
            if(array[i]+array[j]==(sum-goal)){
                cout<<i<<' '<<array[i]<<'\n';
                cout<<j<<' '<<array[j]<<'\n';
                return 0;
            }
        }
    }
    return 0;
}