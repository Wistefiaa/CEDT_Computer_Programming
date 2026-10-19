#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n];
  for (int i=0; i<n; ++i) cin >> a[i];
  int mx_wlen = 0, wlen = 0;
  for (int i=1; i<n-1; ++i) {
    if (a[i-1] < a[i] && a[i] > a[i+1]) {
      wlen += 3;
    } else if (a[i-1] > a[i] && a[i] < a[i+1]) {
      wlen += 3;
    } else {
      if (wlen > 0) mx_wlen = max(mx_wlen, wlen);
      wlen = 0;
    }
  }
  if (wlen > 0) mx_wlen = max(mx_wlen, wlen);
  cout << mx_wlen;
}