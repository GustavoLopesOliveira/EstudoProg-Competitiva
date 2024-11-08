#include <iostream>
using namespace std;

int main() {
  int  n;
  cin >> n;
  
  
   string game;
   cin >> game;
    
   int contAnton = 0, contDanik = 0;
    
   for(int j = 0; j < n; j++){
     if(game[j] == 'A'){
      contAnton++;
    } else {
       contDanik++;
     }
   }
    
   if(contAnton > contDanik){
     cout << "Anton" << endl;
   } else if (contDanik > contAnton){
     cout << "Danik" << endl;
   } else {
     cout << "Friendship" << endl;
   }
  
}