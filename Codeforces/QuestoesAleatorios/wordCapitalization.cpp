#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string entrada;
    cin >> entrada;
    
    
    
    if(islower(entrada[0])){
      cout << (char) toupper(entrada[0]);
      
      for(int i = 1; i < entrada.length(); i++){
        cout << entrada[i];
      }
      
      cout << endl;
    } else{
      cout << entrada << endl;
    }
}