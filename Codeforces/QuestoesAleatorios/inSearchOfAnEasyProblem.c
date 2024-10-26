#include <stdio.h>
int main(){
    //Number of Peoples
    int n,cont = 0;
    scanf("%d",&n);

    //Declaração do vetor
    int vector[n];
    //Entrada do Vetor
    for(int i = 0; i < n; i++){
        scanf("%d",&vector[i]);
        if(vector[i] == 1){
            cont++;
        }
    }

    if(cont != 0){
        printf("HARD\n");
    }else{
        printf("EASY");
    }


}