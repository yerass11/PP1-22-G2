#include <iostream>
using namespace std;

int main() {
  // .size(), .length()
  string s;
  cin >> s;
  cout << s.size() << endl;

  cout << "First symbol: " << s[0] << endl;
  cout << "Last symbol: " << s[s.size() - 1] << endl;
}