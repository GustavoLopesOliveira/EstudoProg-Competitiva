#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    float soma = 0,entrada;

    for (int i = 0; i < n; i++){
        cin >> entrada;
        soma += entrada;
    }



    cout << soma/n; 
}