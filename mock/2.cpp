#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double x, x_rad, cos_bot, top, bottom, result;
    cin>>x;
    x_rad = (x*M_PI)/180.0;
    top = sqrt(pow(x, 2.0)+pow(cos(x_rad) , 2.0));
    bottom = sin(x_rad)+(pow(cos(x_rad), 3.0)/(pow(x, 2.0)+1.0));
    result = top/bottom;
    cout<<fixed<<setprecision(1)<<result;
    return 0;
}