#include <iostream>
#include <cctype>
 
using namespace std;
 
int main() {
    string entrada;
    cin >> entrada;
 
    int contMaisculas = 0, contMinuculas = 0;
 
    // Contar maiúsculas e minúsculas
    for (int i = 0; i < entrada.size(); i++) {
        if (islower(entrada[i])) {
            contMinuculas++;
        } else if (isupper(entrada[i])) {
            contMaisculas++;
        }
    }
 
    // Converter e imprimir a string completa
    if (contMaisculas <= contMinuculas) {
        // Converter para minúsculas
        for (int i = 0; i < entrada.size(); i++) {
            entrada[i] = tolower(entrada[i]);
        }
    } else {
        // Converter para maiúsculas
        for (int i = 0; i < entrada.size(); i++) {
            entrada[i] = toupper(entrada[i]);
        }
    }
 
    cout << entrada << endl;
 
    return 0;
}