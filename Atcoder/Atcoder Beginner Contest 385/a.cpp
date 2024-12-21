#include <bits/stdc++.h>
using namespace std;

int main(){
    bool condicao = false;
    int a,b,c;
    cin >> a >> b >> c;

    if(a == (b + c)){
        condicao = true;
    }else if( b == (a + c)){
       condicao = true;
    }else if(c == (b + a)){
        condicao = true;
    }else if(a == b && b == c){
        condicao = true;
    }

    if(condicao){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}