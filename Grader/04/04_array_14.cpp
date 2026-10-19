#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r, c;
    cin>>r>>c;
    double array[r][c];
    for(int i=0; i<r; ++i){
        for(int j=0; j<c; ++j){
            cin>>array[i][j];
        }
    }   
    for(int i=1; i<r-1; ++i){
        for(int j=1; j<c-1; ++j){
            double sum = array[i][j]+array[i-1][j]+array[i-1][j-1]+array[i-1][j+1]+array[i][j-1]+array[i][j+1]+array[i+1][j]+array[i+1][j-1]+array[i+1][j+1];
            cout<<round((sum/9)*100)/100.0<<' ';
        }
        cout<<'\n';
    }
    return 0;
}