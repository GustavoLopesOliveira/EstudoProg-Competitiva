#include <stdio.h>

//Função que retorna o mais rico
int ricasso( int v[],int n){
    int maiorValor;
    for(int i = 0; i < n; i++){
        if( i == 0 || v[i] > maiorValor){
            maiorValor = v[i];
        }
    }
    return maiorValor;
}

//Função que retorna a media de fortuna da população
double mediaFortuna(int v[],int n){
    double soma = 0;
    for(int i = 0; i < n; i++){
        soma += v[i];
    }

    return soma/n;
}

//Função que calcula a felicidade das pessoas
double felicidadePercent(int v[],int n,double media){
    double contFelizes = 0,contGenerico = 0;
    for(int i = 0; i < n; i++){
        if(v[] >= media){
            contFelizes++;
        }
        contGenerico++;
    }
    double percent = (contFelizes/contGenerico)*100.0;
    return percent;
}

int main(){
    //Numeros de Casos
    int t;
    scanf("%d",&t);

    for(int i = 1; i <= t; i++){
        //População total
        int n;
        scanf("%d",&n);

        //Dinheiro de cada pessoa da população
        int vetFortunaPessoas[n]
        for(int j = 0; j < n; j++){
            scanf("%d",&vetFortunaPessoas[j]);
        }

        int maisRico = ricasso(vetFortunaPessoas,n);
        double mediaFortuna = mediaFortuna(vetFortunaPessoas,n);

        if(felicidadePercent(vetFortunaPessoas,n,mediaFortuna) >= 50.0){

        }else


    }
}