#include <iostream>
using namespace std;

//esse eu resolvi , estou evoluindo >:D

int main(){
  int n,d;
  
  cin >> n >> d;
  
  char s[n];
  
  for(int i = 0; i < n; i++){
    cin >> s[i];
  }
  
  int contD = 0;
  
  for(int i = n - 1; i >= 0 && contD != d; i--){
    if(s[i] == '@'){
      s[i] = '.';
      contD++;
    }
  }
  
  for(int i = 0; i < n; i++){
    cout << s[i]; 
  }
  
  cout << endl;
}