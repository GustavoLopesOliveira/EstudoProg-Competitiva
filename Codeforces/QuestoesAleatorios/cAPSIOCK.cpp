#include <iostream>
#include <cctype>
using namespace std;

int main(){

    char str[101];
    scanf("%s",str);

    char strSaida[101];

    for(int i = 0; i < 101; i++){
      
        if(i == 0){
            strSaida[0] = toupper(str[0]);
        } else {
           strSaida[i] = tolower(str[i]); 
        }
        
    }

    cout << strSaida << endl;
}