#include <stdio.h>

int eTriangulo(long long a,long long b, long long c){
  if((a + b > c) && (a + c > b) && (b + c > a)){
    return 1;    
  } else {
    return 0;
  }
}

int main(){
  long long  a,b,c;
  scanf("%lld %lld %lld",&a,&b,&c);
  
  float p = (a + b + c)/2.0;
  float area = pow(p * (p -a) * (p - b)* (p - c),1.0/2);
  
  long long menorLado,meioLado,maiorLado,energia = 0;
  if(a > 0 && b > 0 && c > 0 && area > 0){
    if (!eTriangulo(a,b,c)){
      
      
      if(a < b && a < c){
        menorLado = a;
      } else if (b < a && b < c){
        menorLado = b;
      } else {
        menorLado = c;
      }
      
      if( a > b && a > c){
        maiorLado = a;
      } else if ( b > a && b > c){
        maiorLado = b;
      } else {
        maiorLado = c;
      }
      
      meioLado = a + b + c - maiorLado - menorLado;
      energia = maiorLado - (meioLado + menorLado) + 1;
      
    }
    
  }
  
 
  
  printf("%lld\n",energia);
  
}