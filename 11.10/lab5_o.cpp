#include <iostream>
using namespace std;

int main() {
  string s; int max = -1;
  cin >> s;
  for(int i = 0; i < s.size(); ++i) {
    if(s[i] > max) {
      max = s[i];
    }
  }
  cout << (char) max;
  cout << char(max);
}