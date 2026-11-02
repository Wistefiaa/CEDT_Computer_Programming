#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, z;
    cin>>x>>y>>z;
    if(x<50){
        while(15>=(x/(y+z))){
            if(y>z){
                while(y%2!=0){
                    x = x- (y-z);
                    y += 1;
                    if(y<=z){
                        cout<<x<<' '<<y<<' '<<z;
                        return 0;
                    }
                }
                x += pow(y, 2)+pow(z, 2);
                if(x%10==4){
                    cout<<x<<' '<<y<<' '<<z;
                    return 0;
                }
                else{
                    if(x%3==0){
                        y--;
                    }
                    else{
                        z++;
                    }
                }
            }
            else{
                cout<<x<<' '<<y<<' '<<z;
                return 0;
            }
        }
        cout<<x<<' '<<y<<' '<<z;
        return 0;    }
    else{
        if(x>y){
            if(x%2==0){
                x *= 2;
                y = x+4;
                z = (y-x)*3;
                cout<<x<<' '<<y<<' '<<z;
                return 0;
            }
            else if(y<z){
                x = x + y;
                y = x * 3;
                z = y + z;
                cout<<x<<' '<<y<<' '<<z;
                return 0;
            }
            else{
                x /= 2;
                y *= 2;
                z = x-y;
                cout<<x<<' '<<y<<' '<<z;
                return 0;
            }
        }
        else{
            if(z%3==2){
                x = y*5;
                y = x/2;
                z = y+7;
                cout<<x<<' '<<y<<' '<<z;
                return 0;
            }
            else if(y>z){
                x = x+z;
                y = y-3;
                z = x*2;
                cout<<x<<' '<<y<<' '<<z;
                return 0;
            }
            else{
                x -=1;
                y +=z;
                z = y-4; 
            }
        }
    }
    cout<<x<<' '<<y<<' '<<z;
    return 0;
}