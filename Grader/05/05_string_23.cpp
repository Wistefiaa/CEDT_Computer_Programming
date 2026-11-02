#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, new_num_str;
    int m, carry_letter = 0, carry_first = 0;
    cin>>s>>m;   
    string num_str = s.substr(4,3);
    int num = stoi(num_str);
    int new_num = (num+m)%1000;
    int carry = (num+m)/1000;
    if(carry!=0){
        char third_letter = s[2];
        int third_pos = third_letter - 'A';
        int total_third = third_pos + carry;
        third_letter = 'A' + (total_third % 26);
        int carry_letter = total_third / 26;
        char second_letter = s[1];
        int second_pos = second_letter - 'A';
        int total_second = second_pos + carry_letter;
        second_letter = 'A' + (total_second % 26);
        int carry_first = total_second / 26;
        char first_num = s[0];
        int first_pos = first_num - '0';

        int total_first = first_pos + carry_first;
        first_num = '0' + (total_first % 10);
        if(new_num<10){
            new_num_str += "00";
            cout<<first_num<<second_letter<<third_letter<<'-'<<new_num_str<<new_num;
        }
        else if(new_num<100){
            new_num_str += "0";
            cout<<first_num<<second_letter<<third_letter<<'-'<<new_num_str<<new_num;
        }
        else cout<<first_num<<second_letter<<third_letter<<'-'<<new_num;
    }
    else{
        if(new_num<10){
            new_num_str += "00";
            cout<<s.substr(0,4)<<new_num_str<<new_num;
        }
        else if(new_num<100){
            new_num_str += "0";
            cout<<s.substr(0,4)<<new_num_str<<new_num;
        }
        else cout<<s.substr(0,4)<<new_num;
    }
        
    return 0;
}