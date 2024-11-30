#include <iostream>
using namespace std;
 //Nao resolvi o problema pois e muito lento, mas ele funciona.
 // :) 
 
int main(){
  //Pessoas, Sushis
  long long n,m;
  
  //Entradas
  cin >> n >> m;
  
  long long pessoasChiqueza[n], sushisChiqueza[m];
  
  for(long long i = 0; i < n; i++){
    cin >> pessoasChiqueza[i];
  }
  
  for(long long i = 0; i < m; i++){
    cin >> sushisChiqueza[i];
  }
  
  //Saida
  for(long long i = 0; i < m; i++){
    long long pessoaComeu = -1;
    bool achou = false;
    
    for(long long j = 0; j < n && !achou; j++){
      if(sushisChiqueza[i] >= pessoasChiqueza[j]){
        pessoaComeu = j + 1;
        achou = true;
      }
    }
    
    cout << pessoaComeu << endl;
  }
}