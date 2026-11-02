#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> grid;
    vector<int> row_data;
    int n, in, mode, sum_a = 0, sum_b = 0, cursor_b, newRow, newCol, r=0, c=0, count=0, collision = 0;
    cin>>n;
    for(int i=0; i<n; ++i){
        row_data.clear();
        for(int j=0; j<n; ++j){
            cin>>in;
            row_data.push_back(in);
        }
        grid.push_back(row_data);
    }
    cursor_b = grid[r][c];
    for(int i=0; i<n; ++i){
        if(i%2==0){
            for(int j=0; j<n; ++j){
                if(count%2==0) sum_a-=grid[i][j];
                else sum_a+=grid[i][j];
                if(cursor_b%2==0){
                    newRow = ((r+cursor_b)% n + n)%n;
                    newCol = ((c+cursor_b+1)%n + n)%n;
                }
                else{
                    newRow = ((r+cursor_b)% n + n)%n;
                    newCol = ((c-cursor_b-1)%n + n)%n;
                }
                if(r!=i||c!=j){
                    if(cursor_b%2==0){
                        sum_b+=cursor_b;
                    }
                    else{
                        sum_b-=cursor_b;
                    }
                }
                else{
                    collision++;
                }
                cursor_b = grid[newRow][newCol];
                r = newRow;
                c = newCol;
                count++;
            }
        }
        if(i%2==1){
            for(int j=n-1; j>=0; --j){
                if(count%2==0) sum_a-=grid[i][j];
                else sum_a+=grid[i][j];
                if(cursor_b%2==0){
                    newRow = ((r+cursor_b)% n + n)%n;
                    newCol = ((c+cursor_b+1)%n + n)%n;
                }
                else{
                    newRow = ((r+cursor_b)% n + n)%n;
                    newCol = ((c-cursor_b-1)%n + n)%n;
                }
                if(r!=i||c!=j){
                    if(cursor_b%2==0){
                        sum_b+=cursor_b;
                    }
                    else{
                        sum_b-=cursor_b;
                    }
                }
                else{
                    collision++;
                }
                cursor_b = grid[newRow][newCol];
                r = newRow;
                c = newCol;
                count++;
            }
        }
    }
    cin>>mode;
    if(mode==1){
        if(sum_a>sum_b){
            cout<<"A "<<sum_a<<' '<<sum_b;
        }
        else if(sum_b>sum_a){
            cout<<"B "<<sum_a<<' '<<sum_b;
        }
        else{
            cout<<"EQUAL "<<sum_a<<' '<<sum_b;
        }
    }
    else if(mode==2){
        cout<<collision;
    }
    return 0;
}