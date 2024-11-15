#include <stdio.h>
#include <string.h>

int main(){
    int t;
    char string[101];

    scanf("%d",&t);    

    for(int i = 0; i < t; i++){
        int ePalidromo = 1;

        fgets(string,101,stdin);

        for(int j = 0; j < strlen(string) - 1; j++){
            if (string[j] != string[strlen(string) - 1 - j]){
                ePalidromo = 0;
            }
            
        }

        if(ePalidromo == 1){
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    }

    
}