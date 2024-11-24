#include <iostream>
using namespace std;

int modulo(int n){

    if(n < 0){
        return -1 * n;
    } else {
        return n;
    }
}

int main(){
    //Objetivo,Muralha,Martelo
    int x,y,z;
    
    cin >> x >> y >> z;

    int movMin = 0;
    bool condicao = false;

    if(modulo(z) < modulo(y)){
        condicao = true;
        

    }

    if(condicao){
        cout << movMin << endl;
    } else {
        cout << "-1" << endl;
    }
}