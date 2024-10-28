#include <iostream>
#include <vector>
using namespace std;

bool equilibrado(int n, const vector<vector<int>>& mat) {
    long long somaX = 0, somaY = 0, somaZ = 0;

    for (int i = 0; i < n; i++) {
        somaX += mat[i][0];
        somaY += mat[i][1];
        somaZ += mat[i][2];
    }

    // Verifica se todas as somas são zero
    return (somaX == 0 && somaY == 0 && somaZ == 0);
}

int main() {
    int n;
    cin >> n;

    // Define a matriz como n linhas e 3 colunas
    vector<vector<int>> mat(n, vector<int>(3));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }

    if (equilibrado(n, mat)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
