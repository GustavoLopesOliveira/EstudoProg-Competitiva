#include <iostream>
using namespace std;
 
int main(){
    
    long long n,somaDigitos = 0;

    cin >> n;


    if(n < 10){
      somaDigitos = n;
    } else if(n < 100){
        somaDigitos = 2*n - 9;
    } else if(n < 1000){
        somaDigitos = ;
    } else if(n < 10000){
        somaDigitos = 4;
    } else if(n < 100000){
        somaDigitos = 5;
    } else if(n < 1000000){
        somaDigitos = 6;
    } else if(n < 10000000){
        somaDigitos = 7;
    } else if(n < 100000000){
        somaDigitos = 8;
    } else if(n < 1000000000){
        somaDigitos = 9;
    }
    


    cout << somaDigitos << endl;
}