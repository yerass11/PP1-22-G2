#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int arr[n];

  int max = 0;
  int min = 2 * 1e9;

  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for(int i = 0; i < n; i++) {
    if(max < arr[i]) {
      max = arr[i];
    }
    if(min > arr[i]) {
      min = arr[i];
    }
  }

  for(int i = 0; i < n; i++) {
    if(arr[i] == max) {
      arr[i] = min;
    }
  }
  
  for(int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
}
