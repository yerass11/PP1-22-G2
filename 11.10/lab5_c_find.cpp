#include <iostream>
#include <string>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  // cout << (s.find(t) != string::npos ? "YES" : "NO");
  cout << (s.find(t) != -1 ? "YES" : "NO");
}