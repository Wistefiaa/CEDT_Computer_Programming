#include <iostream>
#include <vector>
using namespace std;
vector<string> split(string line, char delimiter) {
    vector<string> word;
    string s;
    for(int i=0; i<line.length(); ++i){
        if(line[i]==delimiter){
            if(s.length()!=0) word.push_back(s);
            s = "";
        }
        else{
            s+=line[i];
        }
        if(i==line.length()-1) if(s.length()!=0) word.push_back(s);
    }
    return word;
}
int main() {
string line;
getline(cin, line);
string delim;
getline(cin, delim);
for (string e : split(line, delim[0])) {
cout << '(' << e << ')';
}
}