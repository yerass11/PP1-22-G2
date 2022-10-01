#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  int m; cin >> m;
  int b[m];
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }

  int ans[n + m];
  for(int i = 0; i < n; i++) {
    ans[i] = a[i];
  }
  for(int i = 0; i < m; i++) {
    ans[i + n] = b[i];
  }

  sort(ans, ans + n + m);
  for(int i = 0; i < n + m; i++) {
    cout << ans[i] << " ";
  }

  return 0;
}