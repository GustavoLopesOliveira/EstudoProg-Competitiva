#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int tamanhoString = s.size();

    bool condicao1 = false , condicao2, condicao3;

    //Verifica se e par
    if(tamanhoString % 2 == 0){
        condicao1 = true;
    }

    for(int i = 0; i < tamanhoString/2; i++){
        
    } 





    if(condicao1 && condicao2 && condicao3){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}