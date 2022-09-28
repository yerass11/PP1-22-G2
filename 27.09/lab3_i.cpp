#include <iostream>
using namespace std;

int main() {
  int n, l, r; cin >> n >> l >> r;
  int arr[n];

  for(int i = 1; i <= n; i++) {
    cin >> arr[i];
  }

  // first
  for(int i = 1; i < l; ++i) {
    cout << arr[i] << ' ';
  }

  // middle with reverse
  for(int i = r; i >= l; --i) {
    cout << arr[i] << ' ';
  }

  // last
  for(int i = r + 1; i <= n; ++i) {
    cout << arr[i] << ' ';
  }
}