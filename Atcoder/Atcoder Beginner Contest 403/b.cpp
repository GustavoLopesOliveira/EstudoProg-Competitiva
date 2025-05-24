#include <bits/stdc++.h>
using namespace std;

int main() {
    string T, U;
    cin >> T >> U;
    int lenT = T.size();
    int lenU = U.size();
    bool possible = false;

    for (int i = 0; i <= lenT - lenU; ++i) {
        bool match = true;
        for (int j = 0; j < lenU; ++j) {
            if (T[i + j] != '?' && T[i + j] != U[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            possible = true;
            break;
        }
    }

    cout << (possible ? "Yes" : "No") << endl;
    return 0;
}