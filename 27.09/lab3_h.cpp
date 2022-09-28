#include <iostream>

using namespace std;

int main() {
  int n, l, r;
  cin >> n >> l >> r; 
  int arr[n];
  for(int i = 1; i <= n; i++) {
    cin >> arr[i];
  }

  long long sum = 0;
  for(int i = l; i <= r; i++) {
    // cout << "Index - " << i << " " << " Element - " << arr[i] << endl; 
    sum += arr[i];
  }
  cout << sum;

  return 0;
}