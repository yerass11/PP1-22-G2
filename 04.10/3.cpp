#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  
  int arr[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  int sum = 0;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(i == 0) {
        sum += arr[i][j];
      }
    }
  }
  cout << sum;

  // for(int j = 0; j < m; ++j) {
  //   sum += arr[1][j];
  // }

  // cout << sum;


  return 0;
}