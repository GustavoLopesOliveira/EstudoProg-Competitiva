#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){

        long long m,a,b,c;
        cin >> m >> a >> b >> c;


        
        long long c1,c2,c3;

        if(a > m){
            c1 = m;
        } else {
            c1 = a;
        }

        if(b > m){
            c2 = m;
        } else {
            c2 = b;
        }

        if(c1 < m){
            c1 += c % c1;
            c -= c % c1;
        }

        if(c2 < m){
            c2 += c % c2;
        }

        long long resultado = c1 + c2;


        cout << resultado << endl;
    }
}