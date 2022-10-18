#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            cout << s[i];
        }
        if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z') {
            cout << s[i];
        }
    }
    cout << "\n";

    return 0;
}