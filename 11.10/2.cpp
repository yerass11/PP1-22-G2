#include <iostream>
using namespace std;
int main() {
  string fullName;
  // Ломается на первом пробеле
  // cin >> fullName;
  // cout << "FIO: " << fullName;
  // Читаем полностью
  getline(cin, fullName);
  cout << "FIO: " << fullName;
}