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

    int max = -1, min = 1e9;
    for(int i = 0; i < 10; i++) {
        if(arr[i] == 0) continue;
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }
    cout << (max == min ? "YES" : "NO");

    return 0;
}