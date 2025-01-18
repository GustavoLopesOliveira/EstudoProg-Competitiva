#include <bits/stdc++.h>

using namespace std;


typedef long long ll;

int main(){
    ll x; cin >> x;

    ll cont = 0,aux = 1,i=1;

    while(aux != x){
        aux *= i;
        i++;
        cont++;
    }

    cout << cont << endl;
}