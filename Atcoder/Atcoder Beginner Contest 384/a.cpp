#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  char c1,c2;
  
  string str,strResultado;
  
  cin >> n >> c1 >> c2;
  
  cin >> str;
  
  strResultado = str;
  
  for(int i = 0; i < n; i++){
    if(str[i] != c1){
      strResultado[i] =  c2;
    }
  }
  
  
  cout << strResultado << endl;
}