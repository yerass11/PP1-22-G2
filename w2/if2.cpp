#include <iostream>
using namespace std;

// Ключевые слова
// 1
// * if (условие)
// 2
// * else if (условие)
// 3
// * else 


// [0 - 40], [41 - 80], [81 - 120]

int main() {
  int n; cin >> n;

  if ( 0 <= n and n <= 40 ) {
    cout << "[0, 40]";
  } else if ( 41 <= n and n <= 80 ) {
    cout << "[41, 80]";
  } else if ( 81 <= n and n <= 120 ) {
    cout << "[81, 120]";
  } else {
    cout << "Out of range";
  }
  return 0;
}