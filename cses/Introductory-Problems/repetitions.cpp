#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    string str; cin >> str;
    ll aux = 1,maiorSaida = 1;

    for(ll i = 1; i < str.size(); i++){
        if(str[i] == str[i -1]){
            aux++;
            if( i == 1 || aux > maiorSaida){
                maiorSaida = aux;
            }
        }else{
            aux = 1;
        }
    }

    cout << maiorSaida << endl;
}