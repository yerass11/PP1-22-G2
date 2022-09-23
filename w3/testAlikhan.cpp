// 50
// 5 10 15 20 25 30 35 40 45 50
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 5 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}