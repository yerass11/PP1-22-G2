#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    char a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i + j == n - 1) {
                a[i][j] = char('1' + i);
            } else {
                a[i][j] = '.';
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}