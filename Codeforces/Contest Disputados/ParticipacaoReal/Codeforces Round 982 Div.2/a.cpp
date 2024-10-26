#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) { 
        // Número de quadriláteros
        int n;
        cin >> n;

        // Vetores para a largura e altura
        vector<int> w(n);
        vector<int> h(n);

        for (int j = 0; j < n; j++) {
            // Entradas da largura e altura
            cin >> w[j] >> h[j]; 
        }

        int maiorW = 0;
        int somaH = 0;

        // Encontra a maior largura e soma das alturas
        for (int j = 0; j < n; j++) {
            maiorW = max(maiorW, w[j]);
            somaH += h[j]; // Soma todas as alturas
        }

        // Perímetro do retângulo total que envolve todos os carimbos
        int perimetroTotal = 2 * (maiorW + somaH);

        // Saída
        cout << perimetroTotal << endl;
    }

    return 0;
}
