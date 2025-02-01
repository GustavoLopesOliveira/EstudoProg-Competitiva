#include <bits/stdc++.h>
using namespace std;

int main(){
    string d; cin >> d;

    string saida;

    if(d == "N") saida = "S";

    if(d == "E") saida = "W";

    if(d == "W") saida = "E";

    if(d == "S") saida = "N";

    if(d == "NE") saida = "SW";

    if(d == "NW") saida = "SE";

    if(d == "SE") saida = "NW";

    if(d == "SW") saida = "NE";



    cout << saida << endl;
}