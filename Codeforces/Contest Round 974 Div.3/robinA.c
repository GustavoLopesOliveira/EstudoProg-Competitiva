#include <stdio.h>

int main(){
    //Quantidades de Casos
    int t,n,k;
    scanf("%d",&t);

    for(int i = 1; i <= t; i++){
        int contadorD = 0,dinheiroRobin = 0;
        //Numero de pessoas e quantidade de dinheiro que o robin quer
        scanf("%d %d",&n,&k);
        //Dinheiro de cada pessoa
        int vetPessoas[n];

        for(int j = 0; j < n; j++){
            scanf("%d",&vetPessoas[j]);

            if(vetPessoas[j] >= k){
                dinheiroRobin += vetPessoas[j];
            } else if (vetPessoas[j] == 0 && dinheiroRobin > 0){
                dinheiroRobin--;
                contadorD++;
            }

        }

        //Quantidades de Pessoas ajudadas
        printf("%d\n",contadorD);
    }

}