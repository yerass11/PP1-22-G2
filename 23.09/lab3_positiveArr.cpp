#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n], cnt = 0;
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  // cout << &arr[0] << endl;
  // cout << &arr[1] << endl;
  // cout << arr << endl;
  for(int i = 0; i < n; i++) {
    if(arr[i] > 0) {
      cnt++;
    }
  }
  cout << cnt;

  return 0;
}