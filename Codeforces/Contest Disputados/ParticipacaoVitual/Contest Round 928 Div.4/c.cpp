#include <bits/stdc++.h>
using namespace std;

// Função para calcular a soma dos dígitos de 1 até n
long long sum_of_digits(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;  // Soma o último dígito
        n /= 10;        // Remove o último dígito
    }
    return sum;
}

long long calculate_sum(long long n) {
    long long result = 0;
    for (long long i = 1; i <= n; i++) {
        result += sum_of_digits(i);
    }
    return result;
}

int main() {
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;

        // Calcular a soma de todos os números transformados
        long long rest = calculate_sum(n);

        // Imprimir o resultado
        cout << rest << endl;
    }
    return 0;
}
