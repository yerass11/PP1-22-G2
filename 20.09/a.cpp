#include <iostream>
using namespace std;

int main() {

    int i = 1;
    int sum = 0;
    int n; cin >> n;

    // i = 0, n = n
    while ( i <= n ) {
        sum += i;
        i++;
    }

    cout << sum;
    return 0;

}