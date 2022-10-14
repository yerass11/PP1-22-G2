#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    char s[n];
    for(int i = 0; i < n; i++) {
        s[i] = char(a[i] + int('A'));
    }
    for(int i = 0; i < n; i++) {
        cout << s[i];
    }
    cout << "\n";

    return 0;
}