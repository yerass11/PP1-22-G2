#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  // int i = 1;
  // while(i <= n) {
  //   cout << i << " ";
  //   i *= 2;
  // }

  for(int i = 1; i <= n; i *= 2) {
    cout << i << " ";
  }

  return 0;
}