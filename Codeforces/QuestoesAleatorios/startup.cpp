#include <iostream>
using namespace std;
 
bool ePalindromo(string entrada){

    

    for(int i = 0; i < entrada.size(); i++){
        if(!(entrada[i] == 'A' || entrada[i] == 'H' || entrada[i] == 'I' ||
        entrada[i] == 'M' || entrada[i] == 'O' || entrada[i] == 'T' ||
        entrada[i] == 'U' || entrada[i] == 'V' || entrada[i] == 'W' || entrada[i] == 'X' ||
        entrada[i] == 'Y')){
            return false;
        } else if(entrada.size() == 1){
            return true;
        }
    }

    for(int i = 0; i < entrada.size(); i++){
        if(entrada[i] != entrada[entrada.size() - 1 - i]){
            return false;
        }
    }

    return true;
}

int main(){
    string entrada;
    cin >> entrada;

    if(ePalindromo(entrada)){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }


}