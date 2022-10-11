#include <iostream>
using namespace std;

int main() {
  string s; cin >> s;
  int cntUpper = 0, cntLower = 0;
  for(int i = 0; i < s.size(); ++i) {
    if(s[i] >= 'a' && s[i] <= 'z') {
      cntLower++;
    } else {
      cntUpper++;
    }
    // Ternary
    // s[i] >= 'a' && s[i] <= 'z' ? cntLower++ : cntUpper++;
  }
  cout << cntLower << " " << cntUpper << endl;
}