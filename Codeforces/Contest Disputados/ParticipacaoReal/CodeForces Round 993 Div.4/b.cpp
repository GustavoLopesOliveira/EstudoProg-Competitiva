#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        string strEntrada,strSaida;
        cin >> strEntrada;
        strSaida = strEntrada;

        for(int j = 0; j < strEntrada.size(); j++){
            strSaida[j] = strEntrada[strEntrada.size() - 1 - j];
            if(strEntrada[strEntrada.size() - 1 - j] == 'p'){
                strSaida[j] = 'q';
            } else if(strEntrada[strEntrada.size() - 1 - j] == 'q'){
                strSaida[j] = 'p';
            }
        }

        cout << strSaida << endl;
    }
}