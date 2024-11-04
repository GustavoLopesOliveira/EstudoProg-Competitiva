#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    for(int i = 0 ; i < t; i++){
      int n;
      cin >> n;
      
      char vetorString[n];
      
      for(int j = 0; j < n; j++){
        cin >> vetorString[j];
      }
      
      if(vetorString[0] != vetorString[n-1]){
        cout << "YES" << endl;
      } else {
        cout << "NO"  << endl;  
      }
    }
}