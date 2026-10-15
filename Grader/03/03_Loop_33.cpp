#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, min_zig = INT_MAX, max_zig = INT_MIN, count=0, min_zag = INT_MAX, max_zag = INT_MIN;
    while(x!=-998&&x!=-999){
        cin>>x>>y;
        if(x==-998) break;
        if(x==-999) break;
        if(count%2==0){
            if(x<min_zig) min_zig = x;
            if(y>max_zig) max_zig = y;
            if(y<min_zag) min_zag = y;
            if(x>max_zag) max_zag = x;
        }
        else if(count%2==1){
            if(y<min_zig) min_zig = y;
            if(x>max_zig) max_zig = x;
            if(x<min_zag) min_zag = x;
            if(y>max_zag) max_zag = y;
        }
        count++;
    }
    if(x==-998){
        cout<<min_zig<<' '<<max_zig;
    }
    else{
        cout<<min_zag<<' '<<max_zag;
    }
    
    return 0;
}