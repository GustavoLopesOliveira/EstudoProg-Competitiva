#include <stdio.h>
int main(){
    int n,c,contCandys = 1;
    scanf("%d %d",&n,&c);
    
    int vet[n];

    //Entrada dos tempos
    for(int i = 0; i < n;i++){
        scanf("%d",&vet[i]);
    }

    int timeButton = vet[0];

    for(int i = 0; i < n; i++){
        if(vet[i] - timeButton >= c){
            contCandys++;
            timeButton = vet[i];
        }
    }

    printf("%d\n",contCandys);

}