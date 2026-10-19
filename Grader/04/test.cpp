#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int a[N];
    for (int i=0; i<N; ++i) cin >> a[i];
    int T; cin >> T;
    int max_len = 0;
    int curr_len = 1;
    for (int i = 1; i < N; ++i) {
        if (abs(a[i] - a[i - 1]) <= T) {
            curr_len++;
        } else {
            curr_len = 1;
        }
        max_len = max(max_len, curr_len);
    }
    max_len = max(max_len, curr_len);
    cout << max_len << endl;
    return 0;
}