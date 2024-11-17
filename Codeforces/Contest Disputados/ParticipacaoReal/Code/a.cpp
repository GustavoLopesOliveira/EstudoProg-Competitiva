#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> freq;

        // Ler os elementos e contar frequências
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int score = 0;

        // Calcular o número de pares possíveis
        for (auto& entry : freq) {
            score += entry.second / 2;
        }

        cout << score << endl;
    }

    return 0;
}
