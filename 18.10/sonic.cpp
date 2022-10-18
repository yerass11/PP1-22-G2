#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            a[i][j] = 1;
        }
    }

    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}