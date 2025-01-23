#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin >> n >> k;
    
    //18
    int tempRestante = 240 - k;

    int cont = 0;
    int soma = 0;

    for(int i = 1; i <= n; i++){
        if(soma + 5 * i <= tempRestante){
            soma += 5 * i;
            cont++;
        }else{
          break;
        }
    }


    cout << cont << endl;
}