#include <iostream>
using namespace std;

int main(){
    string n;
    int cont1 = 0,cont2 = 0,cont3 = 0;

    cin >> n;

    for(int i = 0; i < n.length(); i++){
        if(n[i] == '1'){
            cont1++;
        } else if(n[i] == '2'){
            cont2++;
        } else if(n[i] == '3'){
            cont3++;
        }
    }

    if(cont1 == 1 && cont2 == 2 && cont3 == 3){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}