#include <stdio.h>
#include <string.h>

int main(){
    int n,contador = 0;
    scanf("%d",&n);

    char string[4];
    for(int i = 0; i < n; i++){
        scanf("%s",&string);

        if( strcmp(string, "X++") == 0 || strcmp(string, "++X") == 0){
            contador++;
        }

        if(strcmp(string, "X--") == 0|| strcmp(string, "--X") == 0){
            contador--;
        }
    }

    printf("%d\n",contador);
}