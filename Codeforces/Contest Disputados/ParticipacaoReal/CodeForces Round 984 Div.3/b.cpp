#include <iostream>
using namespace std;

int main(){
    long long  t;
    cin >> t;

    for(long long i = 0 ; i < t; i++){

        long long n,k,maxAmount;
        cin >> n >> k;
        
        long long bottlesBrand[n];
        long long bottlesCost[k];


        //Lendo as Entradas
        for(long long j = 0 ; j < k; j++){
            cin >> bottlesBrand[j] >> bottlesCost[j];
        }


        long long maioresPrecos[n][k];
        //Inicializar o vetor com 0
        for(long long  j = 0; j < n; j++){
            for(long long l = 0; l < k; l++){
                maioresPrecos = 0;
            }
        }
        



        cout << maxAmount << endl;

    }
}