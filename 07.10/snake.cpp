#include <iostream>
using namespace std;

// Input:
// 3

// Output:
// 1 2 3
// 6 5 4
// 7 8 9 

int main() {
    int n; 
    cin >> n;

    int a[n][n];
    int value = 1;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < n; j++) {
                a[i][j] = value;
                value++;
            }
        } else {
            for(int j = n - 1; j >= 0; j--) {
                a[i][j] = value;
                value++;
            }
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