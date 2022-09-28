#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int sum_even = 0, sum_odd = 0, sum = 0;
  while(n > 0) {
    int x = n % 10;
    sum += x;
    if(x % 2 == 0) {
      sum_even += x;
    } else {
      sum_odd += x;
    }
    n /= 10;
  }
  if(sum_even > sum_odd) {
    cout << sum_even;
  } else if(sum_even < sum_odd) {
    cout << sum_odd;
  } else {
    cout << sum;
  }

  return 0;
}