#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> s[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m - 1; j++) {
            for(int k = 0; k < m - j - 1; k++) {
                int first = 0;
                for(int x = 0; x < s[i][k].size(); x++) {
                    first += int(s[i][k][x]);
                }

                int second = 0;
                for(int x = 0; x < s[i][k + 1].size(); x++) {
                    second += int(s[i][k + 1][x]);
                }

                if(first > second) {
                    swap(s[i][k], s[i][k + 1]);
                }
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << s[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}