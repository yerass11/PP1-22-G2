#include <iostream>

using namespace std;

int main() {
  int n, l, r;
  cin >> n >> l >> r;
  int a[n];
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  while(l < r) {
    int tmp = a[l];
    a[l] = a[r];
    a[r] = tmp;
    l++;
    r--;
  }

  for(int i = 1; i <= n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}