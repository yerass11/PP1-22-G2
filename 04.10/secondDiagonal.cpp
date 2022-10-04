#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  // int sum = 0; - vot tut sozdaete int sum esli 4e
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(i + j == m - 1) {
        // sum += a[i][j];
        cout <<  '(' << i << ',' << j << ')' << " - " << a[i][j] << endl;
      }
    }
  }

  return 0;
}