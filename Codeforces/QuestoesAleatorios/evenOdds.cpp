#include <iostream>
using namespace std;

typedef long long ll;

int main(){
    ll n,k; cin >> n >> k;

    ll saida;
    
    if(n % 2 == 0){
      if(k > n/2){
        saida = 0 + 2 * (k - n/2);
      }else{
        saida = 1 + 2 * (k - 1);
      }
    }else{
      if(k > n/2 + 1){
        saida = 0 + 2 * (k - n/2 - 1);
      }else{
        saida = 1 + 2 * (k - 1 );
      }
    }
    
   


    cout << saida << endl;
}