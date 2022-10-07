#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int max = -1e9;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(max < arr[i][j]) {
                max = arr[i][j];
            }
        }
    }

    int max_index_i = -1, max_index_j = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == max) {
                max_index_i = i;
                max_index_j = j;
                cout << max_index_i + 1 << " " << max_index_j + 1;
                return 0;
            }
        }
    }

    return 0;
}