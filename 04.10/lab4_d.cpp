#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n][n];
  for(int i = 0; i < n; i++) {
    a[i][0] = i;  // 1st column
    a[0][i] = i;  // 1st row
  }

  for(int i = 1; i < n; i++) {
    for(int j = 1; j < n; j++) {
      a[i][j] = a[i][0] * a[0][j];
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}