#include <iostream>
#include <string>
using namespace std;

int main(){
  int n,r;
  
  cin >> n >> r;
  
  int d[n],a[n];
  
  for(int i = 0; i < n; i++){
    cin >> d[i] >> a[i];
  }
  
  for(int i = 0; i < n; i++){
    if(d[i] == 1 && r <= 2799 && r >= 1600){
      r += a[i];
    }
    
    if(d[i] == 2 && r <= 2399 && r >= 1200){
      r += a[i];
    }
  }
  
  cout << r << endl;
}