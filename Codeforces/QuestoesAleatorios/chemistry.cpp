#include <bits/stdc++.h>

using namespace std;

bool ePossivelPalindromo(string str,int tamanho,int quantCharRemove){
    int vet[256] = {0};

    for(int i = 0; i < tamanho; i++){
        vet[str[i]]++;
    }

    int quantImpares = 0;

    for(int i = 0; i < 256; i++){
        if(vet[i] % 2 == 1){
            quantImpares++;
        }
    }

    if(quantImpares == 0 || quantImpares == 1 || quantImpares - quantCharRemove <= 1){
        return true;
    }else{
        return false;
    }
}

int main(){
    int t; cin >> t;

    while(t--){
        // Tamanho String , Char descartado
        int n,k; cin >> n >> k;

        string str; cin >> str;

        if(ePossivelPalindromo(str,n,k)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}