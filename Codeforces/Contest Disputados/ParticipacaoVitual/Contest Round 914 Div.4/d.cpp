#include <bits/stdc++.h>

using namespace std;

bool eVogal(char c){
    if(c == 'a' || c == 'e'){
        return true;
    }

    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string strEntrada;
        vector<char> strSaida(n);

        //Entrada

        cin >> strEntrada;

        for(int i = 0; i < n; i++){
            strSaida[i] = strEntrada[i];
        }

        //Processamento

        for(int i = 0; i < n; i++){
            if(!eVogal(strEntrada[i]) && eVogal(strEntrada[i + 1])){
                strSaida.insert(strSaida.begin() + i,'.');
            }
        }

        //Saida
        for(int i = 0; i < strSaida.size(); i++){
            cout << strSaida[i];
        }

        cout << endl;
    }
}