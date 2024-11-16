#include <iostream>
using namespace std;

int main(){
    string time;
    cin >> time;

    bool condicao = false;
    
    if(time.length() < 7){
      cout << "NO" << endl;
      return 0;
    }

    for(int i = 0; i < time.length() - 6  && !condicao; i++){
        
      
      if(time[i] == time[i + 1] && time[i + 1] == time[i+2] && time[i + 2] == time[i + 3] &&
        time[i + 3] == time[i + 4] && time[i + 4] == time[i + 5] && time[i + 5] == time[i + 6]){
          
          condicao = true;
        }
          
        
    }

    if(condicao){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}