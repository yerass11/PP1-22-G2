#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  
  int first = k / 100;
  int last = k % 10;

  cout << n + first + last;
}