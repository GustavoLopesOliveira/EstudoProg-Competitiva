#include <stdio.h>

int main(){
    long long n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);


    long long pedrasD = m / a;
    long long pedrasE = n / a;

    if(m % a > 0){
        pedrasD++;
    } 

    if(n % a > 0){
        pedrasE++;
    }

    long long flagStones = pedrasD * pedrasE;




    printf("%lld\n",flagStones);
}