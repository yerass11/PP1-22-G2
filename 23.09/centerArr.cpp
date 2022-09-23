#include <iostream>

using namespace std;

// n = 5
// 1 2 100 4 5 
// 100
int main() {
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << a[0] << endl;
  cout << a[n - 1] << endl;
  cout << a[(n - 1) / 2];

  return 0;
}