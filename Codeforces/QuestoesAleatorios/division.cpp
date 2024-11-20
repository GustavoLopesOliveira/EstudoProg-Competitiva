#include <iostream>
using namespace std;

int main(){
    long long t;

    cin >> t;

    for(int i = 0; i < t; i++){
        long long rating;
        cin >> rating;

        string saida;

        if(rating <= 1399){
            saida = "Division 4";
        }else if(rating <= 1599){
            saida = "Division 3";
        } else if(rating <= 1899){
            saida = "Division 2";
        } else {
            saida = "Division 1";
        }

        cout << saida << endl;
    }
}