#include <iostream>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    string a[n][m];
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        int sums[m];
        for(int j = 0; j < m; j++) {
            string s = a[i][j];
            int sum = 0;
            for(int k = 0; k < s.size(); k++) {
                sum += s[k];
            }
            sums[j] = sum;
        }
        for(int j = 0; j < m - 1; ++j) {
            for(int k = j + 1; k < m; k++) {
                if(sums[j] > sums[k]) {
                    swap(sums[j], sums[j + 1]);
                    swap(a[i][j], a[i][k]);
                }
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}