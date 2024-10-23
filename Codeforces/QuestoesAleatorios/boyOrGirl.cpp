#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Função para contar letras diferentes
int contaLetra(const vector<string>& vetor) {
    int contLetrasDiferentes = 0;
    int contaLetra[26] = {0}; // Inicializa o array com zeros

    // Loop sobre todas as strings no vetor
    for (const string& s : vetor) {
        // Loop sobre cada caractere da string atual
        for (char letra : s) {
            if (letra >= 'a' && letra <= 'z') {
                contaLetra[letra - 'a']++; // Conta a ocorrência da letra
            }
        }
    }

    // Conta quantas letras diferentes apareceram
    for (int i = 0; i < 26; i++) {
        if (contaLetra[i] > 0) {
            contLetrasDiferentes++;
        }
    }

    return contLetrasDiferentes;
}

int main() {
    string input;

    // Entrada: lê uma linha
    cin >> input;

    vector<string> vetor;
    vetor.push_back(input); // Adiciona a palavra ao vetor

    // Verifica o número de letras diferentes
    if (contaLetra(vetor) % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
