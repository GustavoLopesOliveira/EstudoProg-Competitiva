#include <iostream>
using namespace std;

int main(){
  string entrada;
  cin >> entrada;
  
  string saida;
  
  for(int i = 0; i < entrada.length(); i++){
    if(!((entrada[i] == 'W' && entrada[i + 1] == 'U' && entrada[i + 2] == 'B') || (entrada[i - 1] == 'W' && entrada[i] == 'U' && entrada[i + 1] == 'B') || (entrada[i - 2] == 'W' && entrada[i - 1] == 'U' && entrada[i] == 'B'))){
      cout << entrada[i];
    } else if ((entrada[i] == 'W' && entrada[i + 1] == 'U' && entrada[i + 2] == 'B') && i != 0) {
      cout << ' ';
    }
  }
  
  cout << endl;
}