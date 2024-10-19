#include <stdio.h>

int taNoMeio(int vetorN[], int localDesejado,int tamanhoVetor, int localInstante){
    for(int i = 0; i < tamanhoVetor; i++){
        if (vetorN ){
             code 
        }
        
    }
}
int main(){
    //Numero do disco, e numero das operações
    int n,q;
    scanf("%d %d",&n,&q);
    
    char movimentoChar[q];
    int movimentoQuantidade[q];
    int contMovimento = 0,movimentoPassadoR = 2,movimentoPassadoL = 1;

    
    for(int i = 0; i < q; i++){
        //Entrada de Dados
        scanf(" %c %d",&movimentoChar[i],&movimentoQuantidade[i]);
        //Processamento
        if(movimentoChar[i] == 'R'){
            contMovimento += movimentoQuantidade[i] - movimentoPassadoR;
            movimentoPassadoR = movimentoQuantidade[i];
        } else if (movimentoChar[i] == 'L'){
            if(movimentoQuantidade[i] != 1){
                contMovimento +=  n - (movimentoQuantidade[i] - movimentoPassadoL);
                movimentoPassadoL = movimentoQuantidade[i];
            } else {
                contMovimento += 0;
            }
            
        }
    }

    printf("%d\n",contMovimento);


}