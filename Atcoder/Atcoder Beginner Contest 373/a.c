#include <stdio.h>
#include <string.h>

int main(){
    char string[101];
    int cont = 0;

    for(int i = 1; i <= 12; i++){
        scanf("%s",string);
        if(strlen(string)== i){
            cont++;
        }
    }

    printf("%d\n",cont);

}