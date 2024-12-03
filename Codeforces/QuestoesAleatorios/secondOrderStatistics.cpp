#include <iostream>

using namespace std;

bool iguais(int vet[],int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(vet[i] != vet[j]){
                return true;
            }
        }
    }

    return false;
}

int main(){
    int n;
    cin >> n;

    int vet[n];

    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }
    
    if(n < 2 || !iguais(vet,n)){
        cout << "NO" << endl;
        return 0;
    }


    


    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(vet[j] > vet[j + 1]){
                int temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
            
        }
    }
    
    bool parada = false;
    for(int i = 1; i < n && !parada; i++){
        if(vet[i] > vet[0]){
            cout << vet[i] << endl;
            parada = true;
        }

    }
}