#include <iostream>
using namespace std;

// 12 % 2 = 0
// 6 % 2 = 0
// 3 % 2 = 1


int main() {
  int n; cin >> n;

  int a = n % 2;
  n /= 2; // n = n / 2;

  int b = n % 2;
  n /= 2;

  int c = n % 2;
  n /= 2;

  int d = n % 2;

  cout << a * 8 + b * 4 + c * 2 + d * 1 << endl;

  return 0;
}