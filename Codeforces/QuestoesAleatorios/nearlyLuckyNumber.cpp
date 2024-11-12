#include <iostream>
using namespace std;

int main(){
    
    string nString; 
    cin >> nString;

  
    long long contNumeros = 0;
    

    for(int i = 0; i < nString.size(); i++){
        if((nString[i] == '4' || nString[i] == '7')){
            contNumeros++;
        }
    }

    if (contNumeros == 4 || contNumeros == 7){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
    
}