#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        string str,strSaida;
        int num1,num2;

        cin >> str;
        
        num1 =  str[0] - '0';
        num2 =  str[2] - '0';

        strSaida = str;

        if(str[1] == '='){
            if(num1 != num2){
                if(num1 > num2){
                    strSaida[1] = '>';
                } else {
                    strSaida[1] = '<';
                }
            }
        } else if( str[1] == '>'){
            if(!(num1 > num2)){
                if(num1 == num2){
                    strSaida[1] = '=';
                }else {
                    strSaida[1] = '<';
                }
            }
        } else if(str[1] == '<') {
            if(!(num1 < num2)){
                if(num1 == num2){
                    strSaida[1] = '=';
                }else {
                    strSaida[1] = '>';
                }
            }
        }

        cout << strSaida << endl;
    }
}