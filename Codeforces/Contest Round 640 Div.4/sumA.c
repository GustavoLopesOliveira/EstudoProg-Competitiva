#include <stdio.h>


//Função que retorna o número de dígitos
int digitos(int a){
    int contDigit = 1;
    while( a / 10 != 0){
        a = a / 10;
        contDigit++;
    }
    return contDigit;
}

int powInt(int n, int m){
    int multiplicatorio = 1;

    if(m == 0)
        return 1;

    for(int i = 1; i <= m; i++){
        multiplicatorio = multiplicatorio * n;
    }

    return multiplicatorio;
}

int main(){
    int t,n,k = 0;
    scanf("%d",&t);//Numero de Casos

    for(int i = 1; i <= t; i++){
        k = 0;
        scanf("%d",&n);//Numero-Entrada

        int vetor[digitos(n)];//Vetor do tamanho dos digitos

        for(int j = 1; j <= digitos(n); j++){ // Pega cada digito no vetor
            vetor[j - 1] = ((n % powInt(10,j))/powInt(10,j-1)) * powInt(10,j - 1);
            if(vetor[j - 1] != 0){
                k++;
            }
        }

        printf("%d\n",k);

        for(int j = digitos(n); j >= 1; j--){
            if(vetor[j - 1] != 0){
                printf("%d ",vetor[j - 1]);
            }
        }
        printf("\n");

    }

}
