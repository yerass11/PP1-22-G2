#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int arr[n];

  int max = -1e9 * 2;
  int max_index = -1;

  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for(int i = 0; i < n; ++i) {
    if(max < arr[i]) {
      max = arr[i];
      max_index = i;
    }
  }

  cout << max_index + 1;

}