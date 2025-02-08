#include <bits/stdc++.h>
using namespace std;

int main(){
	int a1,a2,a3; cin >> a1 >> a2 >> a3;


    bool condicao = false;


    if(a1 * a2 == a3) condicao = true;
    if(a1 * a3 == a2) condicao = true;
    if(a2 * a3 == a1) condicao = true;

    if(condicao){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
