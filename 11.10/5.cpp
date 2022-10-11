#include <iostream>
using namespace std;

int main() {
  string lastName = "Turdalin";
  string firstName = "Nura";
  string fullName = firstName + " " + lastName;
  string s = ""; 
  s += fullName;
  s += ' ';
  s += fullName; 
  cout << s;
}