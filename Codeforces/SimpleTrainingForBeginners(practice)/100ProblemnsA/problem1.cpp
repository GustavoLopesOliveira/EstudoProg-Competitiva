#include <stdio.h>

int main(){

    int n,contN = 0;
    scanf("%d",&n);

    int a,b,c;
    
    for(int i = 1; i <= n; i++){
        scanf("%d %d %d",&a,&b,&c);
        if(!((a == 0 && b == 0 && c == 0) || (a == 1 && b == 0 && c == 0) || (a== 0 && b == 1 && c == 0) || (a == 0 && b == 0 && c == 1)) ){
            contN++;
        }
    }

    printf("%d",contN);


}