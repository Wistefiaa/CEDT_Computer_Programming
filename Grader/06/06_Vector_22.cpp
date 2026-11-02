#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v, v_ans, v_first, v_last;
    int n, first, last, max = INT_MIN;
    bool check = false;
    while(cin>>n){
        v.push_back(n);
    }
    for(int i=0; i<v.size(); ++i){
        first = i;
        last = i;
        for(int j=i+1; j<v.size(); ++j){
            if(v[i]!=v[j]){
                break;
            }
            last = j;
        }
        if(last-first>max){
            max = last-first;
            v_ans.clear();
            v_first.clear();
            v_last.clear();
            v_ans.push_back(v[i]);
            v_first.push_back(first);
            v_last.push_back(last+1);
        }
        else if(last-first==max){
            v_ans.push_back(v[i]);
            v_first.push_back(first);
            v_last.push_back(last+1);
        }
        i = last;

    }
    vector<int> idx;
    for(int i=0; i<v_ans.size(); ++i){
        idx.push_back(i);
    }
    sort(idx.begin(), idx.end(), [&](int a, int b){
    if(v_ans[a] != v_ans[b]){
        return v_ans[a] < v_ans[b];
    }
    return v_first[a] < v_first[b];
    });
    for(auto i:idx){
        cout<<v_ans[i]<<" --> x[ "<<v_first[i]<<" : "<<v_last[i]<<" ]\n";
    }
    return 0;
}