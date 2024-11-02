#include <iostream>
using namespace std;

int main(){

    int n,k,saida = 0;
    cin >> n >> k;
    
    int vet[n];

    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }

    for(int i = 0; i < n; i++){
        if(vet[i] >= vet[k - 1] && vet[i] > 0){
            saida++;
        }
    }

    cout << saida << endl;

}