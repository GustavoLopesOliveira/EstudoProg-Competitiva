#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int vet[n];

    int diferentes = 0;

    if(n == 1){
      cout << 1 << endl;
      return 0;
    }



    for(int i = 0; i < n; i++){
      cin >> vet[i];
    }

    if(n == 2){
        if(vet[0] != vet[1]){
          cout << 2 << endl;
          return 0;
        } else {
            cout << 1 << endl;
            return 0;
        }
    }
    
    for(int i = 0; i < n; i++){
      
      if( i < n - 1){
        if(vet[i] != vet[i+1]){
           diferentes += 2;
           
           if(i < n - 2){
            if(vet[i + 1] != vet[i + 2]){
                diferentes--;
            }
          }
        }
        
        
      }
      
    }
    
    cout << diferentes << endl;
}