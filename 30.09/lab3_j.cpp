#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int k; cin >> k;
  int arr[n];
  for(int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  if(arr[0] > k) {
    cout << 0;
    return 0;
  }
  if(arr[n - 1] <= k) {
    cout << n;
    return 0;
  }

  for(int i = 0; i < n - 1; i++) {
    if(arr[i] == k) {
      cout << i + 1;
      break;
    } else if(arr[i] < k && arr[i + 1] > k) {
      cout << i + 1;
      break;
    } 
  }
}

// 5 7
// 1 3 5 12 14
// 3