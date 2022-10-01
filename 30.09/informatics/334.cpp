#include <iostream>

using namespace std;

// i % d == c;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  for(int i = a; i <= b; i++) {
    if(i % d == c) {
      cout << i << " ";
    }
  }

  return 0;
}