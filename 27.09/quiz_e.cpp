#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  if(n > m) {
    cout << m;
  } else {
    int ans = m - (m / n) * n;
    cout << ans;
  }

  return 0;
}