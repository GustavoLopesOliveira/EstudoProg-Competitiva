#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    for(int i = 1; i <= t; i++){
        char vetChar[3];

        for(int j = 0; j < 3; j++){
            scanf(" %c",&vetChar[j]);
        }

       int  a = vetChar[0] - '0';
       int  b = vetChar[2] - '0';

        printf("%d\n",a+b);
    }
}