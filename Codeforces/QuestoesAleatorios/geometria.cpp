#include <iostream>
using namespace std;

long long modulo(long long n){
    if(n < 0){
        return -1 * n;
    } else {
        return n;
    }
}

int main(){
    long long Xa,Ya,Xb,Yb;
    
    cin >> Xa >> Ya >> Xb >> Yb;

    cout << modulo(Xa - Xb) * modulo(Ya - Yb);
}