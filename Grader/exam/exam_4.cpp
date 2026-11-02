#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int array[n*2], max = INT_MIN, sum=0, count = 0;
    for(int i=0; i<n; ++i){
        cin>>array[i];
        array[i+n] = array[i];
    }   
    for(int i=0; i<n; ++i){
        sum = 0;
        for(int j=i; j<n+i; ++j){
            if(array[j]>array[j+1]){
                sum+=array[j];
                break;
            }
            sum+=array[j];
        }
        if(max<sum) max = sum;
    }
    for(int d=0; d<n; ++d){
        for(int i=0; i<n; ++i){
            count = 0;
            sum = 0;
            if(i==d) continue;
            for(int j=i; j<n+i+1; ++j){
                if(j==d||j==d+n) continue;
                sum+=array[j];
                count++;
                if(count== n - 1){
                    break;
                }
                int next_idx = j + 1;
                if(next_idx == d || next_idx == d+n) {
                    next_idx++; 
                }
                if(array[j] > array[next_idx]){
                    break;
                }
            }
            if(max<sum) max = sum;
        }
    }
    cout<<max;
    
    return 0;
}