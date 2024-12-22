#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long double a,b;
    cin >> b;
    cin >> a;

    long double saida;
    long long saidaInt;

    saida = pow(a,1/b);
    saidaInt = saida;
    
    if(saidaInt == saida){
        cout << saida << endl;
    } else {
        cout << -1 << endl;
    }
     

}