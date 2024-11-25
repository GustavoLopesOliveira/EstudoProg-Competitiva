#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long vet[2 * n];
    for (long long i = 0; i < 2 * n; i++) {
        cin >> vet[i];
    }

    // Ordenar o array
    sort(vet, vet + 2 * n);

    long long soma = 0;

    // Calcular o custo total mínimo
    for (long long i = 0; i < n; i++) {
        soma += vet[2 * i + 1]; // Pega o maior valor do par (max sempre será o segundo valor do par ordenado)
    }

    cout << soma << endl;

    return 0;
}
