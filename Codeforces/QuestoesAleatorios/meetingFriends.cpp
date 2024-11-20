#include <iostream>
using namespace std;

int main(){
    int x1,x2,x3,dist;

    cin >> x1 >> x2 >> x3;


    int maior,menor,meio;

    //Maior
    if(x1 > x2 && x1 > x3){
        maior = x1;
    } else if(x2 > x1 && x2 > x3){
        maior = x2;
    } else if(x3 > x2 && x3 > x1){
        maior = x3;
    }

    //Menor
    if(x1 < x2 && x1 < x3){
        menor = x1;
    } else if(x2 < x1 && x2 < x3){
        menor = x2;
    } else if(x3 < x2 && x3 < x1){
        menor = x3;
    }

    //Meio
    if((x1 > x2 && x1 < x3) || (x1 > x3 && x1 < x2)){
        meio = x1;
    } else if((x2 > x1 && x2 < x3) || (x2 > x3 && x2 < x1)){
        meio = x2;
    } else if((x3 > x1 && x3 < x2)||(x3 > x2 && x3 < x1)){
        meio = x3;
    }

    dist = (maior - meio) + (meio - menor);

    cout << dist << endl;
}