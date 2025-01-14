#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t ; cin >> t;
    
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

        int saida;

        if(a == b && a != c){
            saida = c;   
        }else if(b != c && a == c){
            saida = b;
        }else{
            saida = a;
        }

        cout << saida << endl;
    }


}