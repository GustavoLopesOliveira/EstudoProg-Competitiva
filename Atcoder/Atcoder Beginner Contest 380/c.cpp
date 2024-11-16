#include <iostream>
using namespace std;

int main(){
    //Entradas
    long long n;
    int k;
    cin >> n >> k;

    char str[n + 1];

    cin >> str;

    //Processamento
    long long posicaoInicio,posicaoFim,contK1 = 0,contK2 = 0;

    for(int i = 1; i < n; i++){
        if(str[i - 1] == '1' && str[i] == '0' && contK1 != k){
            contK1++;
            posicaoInicio = i;
        }
    }

    for(int i = 0; i < n; i++){
        if(str[i] == '1' && str[i + 1] == '0' && contK2 != k){

            posicaoFim = i;
        }
    }




    //Saida
    string strSaida;

    for(int i = 0; i < n; i++){
        cout << strSaida[i];
    }
    
    cout << endl;
}