#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;

  int max = -1e9 * 2;
  int max_index = -1;

  for(int i = 0; i < n; i++) {
    int a; cin >> a;

    if(max < a) {
      max = a;
      max_index = i;
    }
  }

  cout << max_index + 1;

}