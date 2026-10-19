#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count=0;
    cin>>n;
    int array[n];
    for(int i=0; i<n; ++i){
        cin>>array[i];
    }   
    for(int i=1; i<n-1; ++i){
        if(array[i]>array[i-1]&&array[i]>array[i+1]){
            count+=1;
        }
    }
    cout<<count;
    return 0;
}