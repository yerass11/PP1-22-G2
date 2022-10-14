#include <iostream>

using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     int left, right;
//     cin >> left >> right;
//     cout << s.substr(left, right - left + 1) << "\n";

//     return 0;
// }

int main() {
    string s; cin >> s;
    int left, right;
    cin >> left >> right;
    for(int i = left; i <= right; i++) {
        cout << s[i];
    }
    cout << "\n";

    return 0;
}
