#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t; 
    while(t--){
        int a1,a2,a4,a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int a3 = a1 + a2;

        int cont = 0;
        int cont2 = 0;

        if(a1 + a2 == a3){
            cont++;
        }

        if(a2 + a3 == a4){
            cont++;
        }

        if(a3 + a4 == a5){
            cont++;
        }

        a3 = a5 - a4;

        if(a1 + a2 == a3){
            cont2++;
        }

        if(a2 + a3 == a4){
            cont2++;
        }

        if(a3 + a4 == a5){
            cont2++;
        }



        if(cont > cont2){
            cout << cont << endl;
        }else{
            cout << cont2 << endl;
        }
    }
}