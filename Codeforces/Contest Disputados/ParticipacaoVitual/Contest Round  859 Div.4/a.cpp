#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int a,b,c; cin >> a >> b >> c;
        char saida;

        if(a + b == c){
            saida = '+';
        }else{
            saida = '-';
        }

        cout << saida << endl;
    }   
}