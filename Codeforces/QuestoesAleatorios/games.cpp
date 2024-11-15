#include <iostream>
using namespace std;

int main(){
    int n,numberGames = 0;

    cin >> n;

    int vetCasa[n];
    int vetFora[n];

    for(int i = 0; i < n; i++){
        cin >> vetCasa[i] >> vetFora[i];
    }


    for(int i = 0; i < n; i++){
        
        if(vetCasa[i] == vetFora[i + 1]){
            numberGames++;
        }
        
    }

    cout << numberGames << endl;
}