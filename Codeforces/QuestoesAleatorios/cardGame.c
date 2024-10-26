#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    int a1,a2,b1,b2;
    for(int i = 0; i < t; i++){

        int vitorias = 0;
        scanf("%d %d %d %d",&a1,&a2,&b1,&b2);

        if(a1 > b1 && a2 > b2){
            vitorias++;
        }
        if(a1 > b2 && a2 > b1){
            vitorias++;
        } 
        if(a2 > b2 && a1 > b1){
            vitorias++;
        }
        if(a2 > b1 && a1 > b2){
            vitorias++;
        }


        printf("%d\n",vitorias);
    }
}