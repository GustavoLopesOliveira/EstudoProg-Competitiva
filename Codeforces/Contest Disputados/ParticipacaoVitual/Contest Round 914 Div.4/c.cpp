#include <bits/stdc++.h>
using namespace std; 

typedef long long ll;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <int> baldes(n);
        
        double soma = 0;

        for(int i = 0; i < n; i++){
            cin >> baldes[i];
            soma += baldes[i];
        }

        soma = sqrt(soma);
        
        ll somaLL = soma;


        if(soma == somaLL){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }


    }
}