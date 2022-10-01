#include <iostream>
using namespace std;

int main() {
  int n;
  int max = -1000000000;
  int second_max = -100000000;
  while(cin >> n) {
    if(n == 0) {
      break;
    }
    if(max < n) {
      second_max = max;
      max = n;
    }
  }
  cout << second_max << endl;

  return 0;
}