#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    string copy = s;
    reverse(s.begin(), s.end());
    cout << (copy == s ? "YES" : "NO");
}