#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int arr[n][m];

  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      cin >> arr[i][j];
    }
  }

  int min = 2e9;
  int row = 0;

  for(int i = 0; i < n; ++i) {
    int sum = 0;
    for(int j = 0; j < m; ++j) {
      sum += arr[i][j];
      // Каждый қатар(колонна - column)
    }
    // Каждый жол(строка - row)
    if( min > sum ) {
      min = sum;
      row = i;
    }
  }

  cout << row << ' ' << min;

  // Input
  // 3 3
  // 1 2 3
  // 1 2 3
  // 1 2 3
  // Output
  // 6 6 6

}