#include <iostream>
using namespace std;

bool eContrario(string str1, string str2){
    
    int tamanho1 = str1.length();
    if(tamanho1 != str2.length()){
        return false;
    }

    
    for(int i = 0; i < tamanho1; i++){
        if(str1[i] != str2[tamanho1 - i - 1]){
            return false;
        }
    }

    return true;
}

int main(){
    string str1,str2;

    cin >> str1;
    cin >> str2;

    
    
    if(eContrario(str1,str2)){
        cout << "YES" <<  endl;
    } else {
        cout << "NO" << endl;
    }

}