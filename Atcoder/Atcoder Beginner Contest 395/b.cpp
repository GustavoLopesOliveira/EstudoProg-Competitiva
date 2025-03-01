
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(n, string(n, '.')); // Inicializa matriz com '.'

    for (int i = 0; i < n; i++) {
        int j = n - i - 1;
        
        if (i > j) break;

        char c = (i % 2 == 0) ? '#' : '.';

        for (int x = i; x <= j; x++) {
            for (int y = i; y <= j; y++) {
                s[x][y] = c;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << s[i] << endl;
    }
}
