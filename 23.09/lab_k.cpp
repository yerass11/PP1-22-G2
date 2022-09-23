#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int i = 1;
  while(i * i <= n) {
    cout << i * i << endl;
    i++;
  }

  // for(int i = 1; i * i <= n; i++) {
  //   cout << i * i << endl;
  // }

  return 0;
}