#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    // 6
    // j = 2
    // 6 % 2 == 0 - 6 is not Prime
    // 7
    // j = 2
    // 7 % 2 == 1 
    // j = 3
    // 7 % 3 == 1
    // j = 4
    // 7 % 4 == 3
    // j = 5
    // 7 % 5 == 2
    // j = 6
    // 7 % 6 == 1
    // dlya 7 flag = true -> cout << 7;

    int cnt = 0;
    bool flag = true;
    for(int i = l; i <= r; i++) {
        if(i == 0 || i == 1) {
            continue;
        }
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                flag = false;
                break;
            }
        }
        if(flag == true) {
            cout << i << " "; // is prime
            cnt++;
        } else if(flag == false) {
            flag = true;
        }
    }
    cout << "\n" << cnt;

    return 0;
}