#include <iostream>
using namespace std;

int main(){
    string entrada;
    bool condicao = false,temH = false,temE = false ,temL1 = false ,temL2 = false ,temO = false;
    bool achou = false;

    cin >> entrada;

    for(int i = 0; i < entrada.size() && !achou ; i++){
        if(entrada[i] == 'h'){
            temH = true;
        }

        if(entrada[i] == 'e' && temH){
            temE = true;
        }
        
        if(entrada[i] == 'l' && temH && temE && temL1){
            temL2 = true;
        }

        if(entrada[i] == 'l' && temH && temE){
            temL1 = true;
        }


        if(entrada[i] == 'o' && temH && temE && temL1 && temL2){
            temO = true;
        }

        if(temH && temE && temL1 && temL2 && temO){
            condicao = true;
            achou = true;
        }
    }

    if(condicao){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}