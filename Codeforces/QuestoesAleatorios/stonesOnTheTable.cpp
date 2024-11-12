#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    char vetStones[n];

    for(int i = 0; i < n; i++){
        cin >> vetStones[i];
    }

    int cont = 0;

    for(int i = 0; i < n - 1; i++){
        if(vetStones[i] == vetStones[i + 1]){
            cont++;
        }
    }

    cout << cont << endl;
}