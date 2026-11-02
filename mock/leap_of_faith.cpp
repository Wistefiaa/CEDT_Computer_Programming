#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int array[n][n], last = 0, choose = 1, now = 0;
    bool check_choose = false;
    string horse="1";
    for(int i=0; i<n; ++i){
        cin>>array[0][i];
        array[1][i] = array[0][i];
    }
    for(int i=2; i<n; ++i){
        if(n%i==0){
            continue;
        }
        horse = horse+to_string(i);
    }
    /*for(int i=0; i<horse.length(); ++i){
        cout<<horse[i]<<' ';
    }*/
    for(int i=0; i<horse.length(); ++i){
        int num_horse = horse[i]-'0'; //ดึงลำดับม้า
        for(int j=0; j<n; ++j){
            array[num_horse][j] = array[0][now]; //ตามลำดับที่ม้ากระโดดได้
            last = now;
            now = (last + num_horse)%n; //หาจุดที่ม้ากระโดดไป
        }
    }
    for(int i=0; i<n; ++i){
        int max = array[1][i];
        for(int j=1; j<horse.length()-1; ++j){
            int num_horse = horse[j]-'0'; //ดึงลำดับม้า
            if(max<array[num_horse][i]){
                max = array[num_horse][i];
                check_choose = true;
                choose = num_horse;
            }
        }
        if(check_choose) break;
    }
    cout<<choose<<'\n';
    for(int i=0; i<n; ++i){
        cout<<array[choose][i]<<' ';
    }
    return 0;
}