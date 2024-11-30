#include <iostream>
using namespace std;

int main(){
    int n;
    int contTime1 = 0, contTime2 = 0;
    string time1, time2;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        string entrada;
        cin >> entrada;

        if(i == 0){
            time1 = entrada;
            contTime1++;
        }

        if(i != 0){
          if(entrada == time1){
              contTime1++;
          } else {
              time2 = entrada;
              contTime2++;
          }
        }
    }

    if(contTime1 > contTime2){
        cout << time1 << endl;
    }else{
        cout << time2 << endl;
    } 
}