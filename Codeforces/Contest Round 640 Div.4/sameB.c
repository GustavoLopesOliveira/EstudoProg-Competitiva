#include <stdio.h>

int temPA(int n, int k){
    if(k > n || (k % 2 == 0 && n % 2 == 1) || (k % 2 == 1 && n % 2 == 0)){
        return 0;
    }
}

int main(){
    int t,n,k;
    scanf("%d",&t);//Entrada do numero de testes

    for(int i = 1; i <= t; i++){
        scanf("%d %d",&n,&k);//Entrada de N e K

        if(temPA(n,k) == 1){
            printf("YES\n");

        } else {
            printf("NO\n");
        }

    }





}
