#include <iostream>
using namespace std;

// n = 4
// ...*
// ..**
// .***
// ****

// n = 5
// *....
// **...
// ***..
// ****.
// *****

// main diagonal: i == j
// second diagonal: i + j == n - 1
// i >= j - элементы ниже главной диагонали
// i <= j - элементы выше главной диагонали
// i + j >= n - 1 - элементы ниже второй диагонали
// i + j <= n - 1 - элементы выше второй диагонали 

// i = 1
// j = 5
// 1 + 5 >= 6 - 1

int main() {
    int n; cin >> n;

    if(n % 2 == 0) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i + j >= n - 1) {
                    cout << '*';
                } else {
                    cout << '.';
                }
            }
            cout << endl;
        }
    } else {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i >= j) {
                    cout << '*';
                } else {
                    cout << '.';
                }
            }
            cout << endl;
        }
    }

    return 0;
}