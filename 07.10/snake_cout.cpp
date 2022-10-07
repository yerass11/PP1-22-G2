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

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < n; j++) {
                cout << i * n + j + 1 << " ";
            }
        } else {
            for(int j = n - 1; j >= 0; j--) {
                cout << i * n + j + 1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}