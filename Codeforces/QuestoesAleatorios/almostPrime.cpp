#include <bits/stdc++.h>
using namespace std;

bool ePrimo(int n){
  for(int i = 2; i * i <= n; i++){
    if(n%i == 0){
      return false;
    }
  }
  
  return true;
}

bool a(int n){
  int quant = 0;
  
  for(int i = 2 ; i <= n; i++){
    if(n % i == 0 && ePrimo(i)){
      quant++;
    }
  }
  
  if(quant == 2){
    return true;
  }else{
    return false;
  }
  
}

int main() {
    int n; cin >> n;
    
    int rest = 0;
    
    for(int i = 1; i<= n; i++){
      if(a(i)){
        rest++;
      }
    }
    
    cout << rest << endl;
}