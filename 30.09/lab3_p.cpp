#include <iostream>
#include <cmath>

using namespace std;

// 26
// 1
// 2
// 3
// 4
// 5 * 5 = 25

int main() {
  int n;
  cin >> n;
  for(int i = 1; i <= sqrt(n); i++) {
    if(i * i == n) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";

  return 0;
}