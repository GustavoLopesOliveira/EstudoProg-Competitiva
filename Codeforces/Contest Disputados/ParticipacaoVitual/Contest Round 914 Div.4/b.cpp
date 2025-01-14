#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ; cin >> t;
    while(t--){
        char mat[3][3];
        int linha,coluna;

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin >> mat[i][j];
                if(mat[i][j] == '?'){
                    linha = i;
                    coluna = j;
                }
            }
        }

        char saida;

        if(linha == 0){
            if(coluna == 0){
                if((mat[linha][1] == 'B' && mat[linha][2] == 'C') ||
                    mat[linha][1] == 'C' && mat[linha][2] == 'B'){
                        saida = 'A';
                }else if((mat[linha][1] == 'A' && mat[linha][2] == 'C') ||
                          mat[linha][1] == 'C' && mat[linha][2] == 'A'){
                        saida = 'B';
                }else{
                        saida = 'C';
                }
            }else if(coluna == 1){
                 if((mat[linha][0] == 'B' && mat[linha][2] == 'C') ||
                     mat[linha][0] == 'C' && mat[linha][2] == 'B'){
                        saida = 'A';
                }else if((mat[linha][0] == 'A' && mat[linha][2] == 'C') ||
                          mat[linha][0] == 'C' && mat[linha][2] == 'A'){
                        saida = 'B';
                }else{
                        saida = 'C';
                }
            }else{
                 if((mat[linha][0] == 'B' && mat[linha][1] == 'C') ||
                     mat[linha][0] == 'C' && mat[linha][1] == 'B'){
                        saida = 'A';
                }else if((mat[linha][0] == 'A' && mat[linha][1] == 'C') ||
                          mat[linha][0] == 'C' && mat[linha][1] == 'A'){
                        saida = 'B';
                }else{
                        saida = 'C';
                }
            }
        }else if(linha == 1){
            if(coluna == 0){
                if((mat[linha][1] == 'B' && mat[linha][2] == 'C') ||
                    mat[linha][1] == 'C' && mat[linha][2] == 'B'){
                        saida = 'A';
                }else if((mat[linha][1] == 'A' && mat[linha][2] == 'C') ||
                          mat[linha][1] == 'C' && mat[linha][2] == 'A'){
                        saida = 'B';
                }else{
                        saida = 'C';
                }
            }else if(coluna == 1){
                 if((mat[linha][0] == 'B' && mat[linha][2] == 'C') ||
                     mat[linha][0] == 'C' && mat[linha][2] == 'B'){
                        saida = 'A';
                }else if((mat[linha][0] == 'A' && mat[linha][2] == 'C') ||
                          mat[linha][0] == 'C' && mat[linha][2] == 'A'){
                        saida = 'B';
                }else{
                        saida = 'C';
                }
            }else{
                 if((mat[linha][0] == 'B' && mat[linha][1] == 'C') ||
                     mat[linha][0] == 'C' && mat[linha][1] == 'B'){
                        saida = 'A';
                }else if((mat[linha][0] == 'A' && mat[linha][1] == 'C') ||
                          mat[linha][0] == 'C' && mat[linha][1] == 'A'){
                        saida = 'B';
                }else{
                        saida = 'C';
                }
            }
        }else{
            if(coluna == 0){
                if((mat[linha][1] == 'B' && mat[linha][2] == 'C') ||
                    mat[linha][1] == 'C' && mat[linha][2] == 'B'){
                        saida = 'A';
                }else if((mat[linha][1] == 'A' && mat[linha][2] == 'C') ||
                          mat[linha][1] == 'C' && mat[linha][2] == 'A'){
                        saida = 'B';
                }else{
                        saida = 'C';
                }
            }else if(coluna == 1){
                 if((mat[linha][0] == 'B' && mat[linha][2] == 'C') ||
                     mat[linha][0] == 'C' && mat[linha][2] == 'B'){
                        saida = 'A';
                }else if((mat[linha][0] == 'A' && mat[linha][2] == 'C') ||
                          mat[linha][0] == 'C' && mat[linha][2] == 'A'){
                        saida = 'B';
                }else{
                        saida = 'C';
                }
            }else{
                 if((mat[linha][0] == 'B' && mat[linha][1] == 'C') ||
                     mat[linha][0] == 'C' && mat[linha][1] == 'B'){
                        saida = 'A';
                }else if((mat[linha][0] == 'A' && mat[linha][1] == 'C') ||
                          mat[linha][0] == 'C' && mat[linha][1] == 'A'){
                        saida = 'B';
                }else{
                        saida = 'C';
                }
            }
        }

        cout << saida << endl;


    }
}