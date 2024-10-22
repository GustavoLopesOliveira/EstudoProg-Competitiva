#include <stdio.h>

int main(){
    long long n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);

    long long flagStones = n + m - a - a;




    printf("%lld\n",flagStones);
}