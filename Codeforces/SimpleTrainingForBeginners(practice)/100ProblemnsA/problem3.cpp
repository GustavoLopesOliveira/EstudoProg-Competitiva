#include <iostream>
#include <set>
using namespace std;

int main(){
    //Set de char
    set<char> letras;

    //Entrada da String
    string entrada;
    cin >> entrada;

    for(int i = 0; i < entrada.length(); i++){
        letras.insert(entrada[i]);
    }

    if(letras.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}