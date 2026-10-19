#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    double temp, result;
    cin>>n;
    int array[n];
    for(int i=0; i<n; ++i){
        cin>>array[i];
    }
    for(int i=0; i<n; ++i){
        temp = 0;
        temp = array[i];
        result = array[i];
        for(int j=i; j>=0; j--){
            if(j==0){
                cout<<setprecision(10)<<result<<'\n';
            }
            else{
                temp = 1/temp;
                temp = array[j-1]+temp;
            }
            result = temp;
        }
    }
    
    return 0;
}