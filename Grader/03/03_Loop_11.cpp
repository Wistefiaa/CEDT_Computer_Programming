#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n, sum=0;
    int c=0;
    cin>>n;
    while(n!=-1){
        sum+= n;
        c++;
        cin>>n;
    }
    if(sum==0) cout<<"No Data";
    else cout<<round((sum/c)*100)/100;
    
    return 0;
}