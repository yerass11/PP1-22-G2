#include <iostream>
using namespace std;

/*
  <1 - Error
  1 -  Monday
  2 -  Tuesday 
  3 -  Wednesday
  4 -  Thursday 
  5 -  Friday
  6 -  Saturday
  7 -  Sunday
  >7 - Error
*/

int main() {
  int n;
  cin >> n;
  if(n == 1) {
    cout << "Monday";
  }
  else if(n == 2) {
    cout << "Tuesday";
  }
  else if(n == 3) {
    cout << "Wednesday";
  }
  else if(n == 4) {
    cout << "Thursday";
  }
  else if(n == 5) {
    cout << "Friday";
  }
  else if(n == 6) {
    cout << "Saturday";
  }
  else if(n == 7) {
    cout << "Sunday";
  } else {
    cout << "Error";
  }
  return 0;
}