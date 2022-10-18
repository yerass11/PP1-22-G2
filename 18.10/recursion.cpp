#include <iostream>

using namespace std;

void hello(int n) {
    if(n == 0) {
        return;
    }
    cout << "Hello\n";
    hello(n - 1);
}

int main() {
    int n; cin >> n;
    hello(n);
    return 0;
}