#include <iostream>
using namespace std;

int modulo(int x){

    if(x < 0){
        return -1 * x;
    } else {
        return x;
    }
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        //Entrada numero de melodias
        int n = 1;
        cin >> n;
        
        //Melodias perfeitas
        int perfeitas = 0;

        //Entrada das melodias
        int melodias[n];

        for(int j = 0; j < n; j++){
            cin >> melodias[j];
        }

        for(int j = 0; j < n - 1; j++){
            
            if(modulo(melodias[j] - melodias[j + 1]) == 7 || modulo(melodias[j] - melodias[j + 1]) == 5){
                perfeitas++;
            }
            
        }



        if(perfeitas == n - 1){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
}