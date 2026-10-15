#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a;
    cin>>a;
    double L=0, U=a;
    double x = (L+U)/2.0;
    while(abs(a-pow(10, x))>pow(10, -10)*max(a, pow(10,x))){
        if(pow(10,x)>a){
            U = x;
        }
        else{
            L = x;
        }
        x = (L+U)/2.0;
    }
    cout<<x;
    
    return 0;
}