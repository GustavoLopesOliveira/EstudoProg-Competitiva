#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    char s[n];

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }


    bool condicao1 = true, condicao2 = true;

    for(int i = 0; i < (n+1)/2 - 2; i++){
        if(s[i] != '1'){
            condicao1 = false;
        }
    }

    for(int i = (n+1)/2 - 1; i < n; i++){
        if(s[i] != '2'){
            condicao2 = false;
        }
    }

    if((n % 2 == 1) &&
        condicao1 &&
        s[(n+1)/2 - 1] == '/' &&
        condicao2 ){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}