#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int mat[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }

        bool condicao = false;

        for(int i = 0; i < n && !condicao; i++){
            for(int j = 0; j < n && !condicao; j++){
                if(!(i == n -1|| j == n -1)){
                    if(mat[i][j] == 1 && mat[i+1][j] == 1 && mat[i][j+1] == 1 && mat[i + 1][j + 1] == 1){
                        condicao = true;
                    }
                }
            }
        }

        if(condicao){
            cout << "SQUARE" << endl;
        }else{
            cout << "TRIANGLE" << endl;
        }

    }
}