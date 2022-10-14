#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    int sumOdd = 0, sumEven = 0;
    for(int i = 0; i < s.size(); i++) {
        if(i % 2 == 0) {
            sumEven += (s[i] - '0');
        } else {
            sumOdd += (s[i] - '0');
        }
    }
    cout << (sumOdd == sumEven ? "YES\n" : "NO\n");

    return 0;
}