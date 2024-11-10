#include <iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  
  for(int i = 0; i < t; i++){
    char entrada[3];
    
    for(int j = 0; j < 3; j++){
      cin >> entrada[j];
    }
    
    if((entrada[0] == 'y' || entrada[0] == 'Y') && (entrada[1] == 'e' || entrada[1] == 'E') && (entrada[2] == 's' || entrada[2] == 'S')){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}