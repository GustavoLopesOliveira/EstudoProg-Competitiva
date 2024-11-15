#include <iostream>
using namespace std;

int main(){
    //Numero de casos
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int vet[4];

        //Maiores Numeros
        int maior = - 1, segundoMaior = - 1;

        //Numeros que vao para final
        int final1, final2;

        for(int j = 0; j < 4; j++){
            //leitura
            cin >> vet[j];
        }

        for(int j = 0; j < 4; j++){
            //Maior numero
             if( vet[j] > maior){
                maior = vet[j];
            }
        }

        for(int j = 0; j < 4; j++){
             //Segundo maior numero
            if((vet[j] > segundoMaior &&  maior > vet[j])){
                segundoMaior = vet[j];
            }
        }   

        if(vet[0] > vet[1]){
            final1 = vet[0];
        } else {
            final1 = vet[1];
        }

        if(vet[2] > vet[3]){
            final2 = vet[2];
        } else {
            final2 = vet[3];
        }


        if((final1 == maior && final2 == segundoMaior) || (final1 == segundoMaior && final2 == maior)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }


    }
}