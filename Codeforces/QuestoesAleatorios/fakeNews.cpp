#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;


    
    bool temH = false, temE = false,temD = false,temI1 = false,temI2 = false;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'h'){
            temH = true;
        }

        if(s[i] == 'e' && temH){
            temE = true;
        }

        if(s[i] == 'i' && temH && temE){
            temI1 = true;
        }

        if(s[i] == 'd' && temH && temE && temI1){
            temD = true;
        }

        if(s[i] == 'i' && temH && temE && temI1 && temD){
            temI2 = true;
        }

        if(temH && temE && temD && temI1 && temI2){
            break;
        }
    }

    if(temH && temE && temD && temI1 && temI2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}