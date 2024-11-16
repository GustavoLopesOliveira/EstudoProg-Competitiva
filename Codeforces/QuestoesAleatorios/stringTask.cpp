#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string entrada;
    cin >> entrada;

    for(int i = 0; i < entrada.length(); i++){
        if( !(tolower(entrada[i]) == 'a' || tolower(entrada[i]) == 'o' || tolower(entrada[i]) == 'y' ||
             tolower(entrada[i]) == 'e'|| tolower(entrada[i]) == 'u' || tolower(entrada[i]) == 'i')){

                cout << '.';
                cout << (char) tolower(entrada[i]);
        }
    }
}
