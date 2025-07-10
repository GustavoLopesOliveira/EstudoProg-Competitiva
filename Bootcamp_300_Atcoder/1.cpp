#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int a,b; cin >> a >> b;
  
  int aux = a;
  int ans = 1;
  
  while(aux < b){
    aux += a - 1;
    ans++;
  }
  
  if(b == 1) ans = 0;
  
  cout << ans << endl;
  
  
}
