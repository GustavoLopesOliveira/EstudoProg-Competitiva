#include <iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  
  for(int i = 0; i < t; i++){
    string s;
    cin >> s;
    
    string sPadrao = "codeforces";
    int cont = 0;
    
    for(int j = 0; j < 10; j++){
      if(s[j] != sPadrao[j]){
        cont++;
      }
    }
    
    cout << cont << endl;
  }
}