#include <iostream>

using namespace std;

int main() {
  int a[10];

  a[0] = 0;
  a[1] = 1;
  a[2] = 1;

  for(int i = 3; i < 10; i++) {
    a[i] = (a[i - 1] + a[i - 2] + a[i - 3]);
  }
  
  for(int i = 0; i < 10; i++) {
    cout << a[i] << " ";
  }

  return 0;
}