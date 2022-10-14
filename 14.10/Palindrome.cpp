#include <iostream>

using namespace std;

// abba 
// 0  3
//  12
//  12 

int main() {
    string s;
    cin >> s;

    int l = 0, r = s.size() - 1;
    while(l <= r) {
        if(s[l] != s[r]) {
            cout << "NO\n";
            return 0;
        }
        l++;
        r--;
    }
    cout << "YES\n";

    return 0;
}