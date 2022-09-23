#include <iostream>

using namespace std;

// & - AND
// | - OR
// ^ - XOR 

// 2 - 10
// 3 - 11
// & AND
// 10 
// 11
// 10


// |
// 10
// 11
// 11

// ^
// 10
// 11
// 01 - 1
// 00000010

int main() {
  int a, b;
  cin >> a >> b;
  int c = a & b; // AND
  int e = a | b; // OR
  int d = a ^ b; // XOR
  cout << c;

  return 0;
}