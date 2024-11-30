#include <iostream>
using namespace std;

//Resolvido, mas da para melhorar, bora para O Icpc >:D

int main(){
  int n,d;
  
  cin >> n >> d;
  
  char s[n];
  
  for(int i = 0; i < n; i++){
    cin >> s[i];
  }
  
  int contCookie = 0, contNotCookie = 0;
  
  for(int i = 0; i < n; i++){
    if(s[i] == '@'){
      contCookie++;
    } else {
      contNotCookie++;
    }
  }
  
  cout << contNotCookie + d << endl;
}