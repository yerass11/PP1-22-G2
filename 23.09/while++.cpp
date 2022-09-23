#include <iostream>
using namespace std;

int main() {
  int i = 4;

  while( i++ < 5) { // 4 < 5
    cout << "i++ -> " << i << endl;
  }

  while( ++i < 5 ) { // 5 < 5
    cout << "++i -> " << i << endl;
  }
}