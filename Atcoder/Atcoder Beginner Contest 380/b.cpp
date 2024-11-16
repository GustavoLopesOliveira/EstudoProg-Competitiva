#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int cont = 0;

    for(int i = 0; i < s.length(); i++){
        
        if(s[i] == '-'){
            cont++;
        } else if(i != 0) {
            cout << cont << " ";
            cont = 0;
        }

    }
}