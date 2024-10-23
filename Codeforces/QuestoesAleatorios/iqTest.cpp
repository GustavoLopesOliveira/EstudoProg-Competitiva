#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> vetor;
    
    for(int i = 0; i < n; i++){
        int entrada;
        cin << entrada;

        vetor.push_back(entrada);
    }

    int contPar = 0,contImpar = 0;

    for(int i = 0; i < vetor.size(); i++){
        if (vetor[i] % 2 == 0){
            contPar++;
        } else {
            contImpar++;
        }
        
    }

    int posicao;

    if(contPar > contImpar){
        for(int i = 0; i < vetor.size(); i++){
            if (vetor[i] % 2 == 0){
                posicao = i + 1;
            }
            
        }
    } else {
        for(int i = 0; i < vetor.size(); i++){
            if(vetor[i] % 2 == 1){
                posicao = i + 1;
            }
        }
    }

    cout << posicao << endl;
}
