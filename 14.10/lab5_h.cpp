#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s; cin >> s;

    int arr[10];
    for(int i = 0; i < 10; i++) {
        arr[i] = 0;
    }

    for(int i = 0; i < s.size(); i++) {
        arr[int(s[i] - '0')]++;
    }

    sort(arr, arr + 10);
    reverse(arr, arr + 10);

    for(int i = 0; i < 9; i++) {
        if(arr[i] == 0) break;
        if(arr[i] != arr[i + 1] && arr[i + 1] != 0) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}