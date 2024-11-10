#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string entradaString;
    cin >> entradaString;

    // Extraindo os números da string ignorando os '+'
    vector<int> vetorNumbers;
    for (int i = 0; i < entradaString.size(); i += 2) {
        vetorNumbers.push_back(entradaString[i] - '0');
    }

    // Ordenando o vetor
    sort(vetorNumbers.begin(), vetorNumbers.end());

    // Imprimindo o vetor ordenado com os '+' entre os números
    for (int i = 0; i < vetorNumbers.size(); i++) {
        cout << vetorNumbers[i];
        if (i != vetorNumbers.size() - 1) {
            cout << "+";
        }
    }
    cout << endl;
}
