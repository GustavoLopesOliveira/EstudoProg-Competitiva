#include <stdio.h>

int main(){
    // Número de Casos
    int t;
    scanf("%d", &t);

    // Para cada caso de teste
    for(int i = 0; i < t; i++){
        // Entrada de N e K
        int n, k;
        scanf("%d %d", &n, &k);

        // Somatório das folhas dos últimos K anos
        int somaFolhas = ((2 * n - k + 1)*k)/2;
        

        // Verifica se a soma é par ou ímpar
        if(somaFolhas % 2 == 0){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
