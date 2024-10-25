#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    //Entrada 
    cin >> a;
    cin >> b;
    cin >> c;

    int max = -1;

    int caso1,caso2,caso3,caso4,caso5,caso6;

    //Casos normais
    caso1 = a + b + c;
    caso2 = a * b * c;
    caso3 = a * (b + c);
    caso4 = (a + b) * c;

    //Casos sem parenteses
    caso5 = a * b + c;
    caso6 = a + b * c;

    //Saber qual que e o maior agora
    if(caso1 > max){
        max = caso1;
    }

    if(caso2 > max){
        max = caso2;
    }
    
    if(caso3 > max){
        max = caso3;
    }
    
    if(caso4 > max){
        max = caso4;
    }
    
    if(caso5 > max){
        max = caso5;
    }
    
    if (caso6 > max){
        max = caso6;
    }
    
    //Saída do Maior
    cout << max << endl;

}