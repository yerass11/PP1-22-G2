#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;

  int cnt = 0;

  for(int i = 0; i < n; i++) {
    int a; cin >> a;
    if(a % 10 == 7) {
      cnt++;
    }
  }

  cout << cnt;
}
