#include<bits/stdc++.h>
using namespace std;
int powerMod(int a, int k, int m){
    if(k == 0) return 1;
    int x = powerMod(a, k/2, m) % m;
    if(k%2==0){
        return x*x;
    }
    else{
        return a*x*x;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, k, m;
    cin>>a>>k>>m;
    powerMod(a, k, m);
    
    return 0;
}