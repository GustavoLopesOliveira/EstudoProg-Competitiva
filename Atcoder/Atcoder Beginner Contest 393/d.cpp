#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    string str; cin >> str;

    vector<int> pos1;
    for (int i = 0; i < n; i++) {
        if (str[i] == '1') pos1.push_back(i);
    }

    int quant1 = pos1.size();
    int meio = pos1[quant1 / 2]; // Pega a posição do 1 central

    long long passos = 0;
    for (int i = 0; i < quant1; i++) {
        int posDesejada = meio - (quant1 / 2) + i;
        passos += abs(pos1[i] - posDesejada);
    }

    cout << passos << endl;
    return 0;
}

