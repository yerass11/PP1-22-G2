#include <iostream>
using namespace std;

// & - bitwise AND
// | - bitwise XOR
// 

int main() {
    int n;
    cin >> n;                // getting n from terminal
    int counterOdd = 0;      // initializing counterODD
    int counterEven = 0;     // initiazling counterEVEN
    for(int i = 0; i < n; i++) {    // starting for loop
        int a;                   
        cin >> a;
        if(a % 2 == 0) {
            counterEven++;
        } else {
            counterOdd++; 
        }
    }
    cout << counterEven << " " << counterOdd; 

    return 0;
}