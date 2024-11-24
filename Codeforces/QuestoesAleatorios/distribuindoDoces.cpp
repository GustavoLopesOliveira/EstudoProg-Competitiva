#include <iostream>
using namespace std;

int main(){
    //Criancas, total doces ,Valor Criancas triste,Valor EU triste, total doces
    long long n,k,l,r;
    bool condicao = false;

    cin >> n >> k >> l >> r;

    if(k/n >= l && k/n <= r && k % n == 0){
        condicao = true;
    }

    if(condicao){
        cout << 'S' << endl;
    } else {
        cout << 'N' << endl;
    }
}