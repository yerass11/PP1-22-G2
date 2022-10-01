#include <iostream>

using namespace std;

int main() {
  int n;
  float sum = 0;
  int size = 0;
  while(cin >> n) {
    if(n == 0) {
      break;
    }
    sum += n;
    size++;
  }
  cout << sum/size;

  return 0;
}