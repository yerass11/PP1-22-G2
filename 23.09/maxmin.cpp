#include <iostream>
using namespace std;

int main() {
  // int min = INT32_MAX;
  // int max = INT32_MIN;

  int n; cin >> n;
  int min = 1e9;
  int max = -1;
  int arr[n];

  for(int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  for(int i = 0; i < n; ++i) {
    if(max < arr[i]) {
      max = arr[i];
    }
    if(min > arr[i]) {
      min = arr[i];
    }
  }

  cout << max << ' ' << min;

}