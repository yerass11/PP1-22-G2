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

  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  // n = 3, m = 2
  // arr[0][0] - i = 0, j = 0
  // arr[0][1] - i = 0, j = 1
  // arr[1][0] - i = 1, j = 0
  // arr[1][1] - i = 1, j = 1
  // arr[2][0] - i = 2, j = 0
  // arr[2][1] - i = 2, j = 1


}