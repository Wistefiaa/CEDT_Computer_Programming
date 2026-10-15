#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double p;
    cin>>p;
    double k=1, t = 1;
    t = (t*(365-(k-1)))/365.0;  
    while (1-t<p){
        k++;
        t = (t*(365-(k-1)))/365.0;
    }
    cout<<k;
    return 0;
}