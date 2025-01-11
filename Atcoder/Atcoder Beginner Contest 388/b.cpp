#include <bits/stdc++.h>
using namespace std;

int maior(vector<int> a1, vector<int> a2, int k,int tam){
  int maior = -1;
  
  
  for(int i = 0; i < tam; i++){
    if(a1[i] * (a2[i] + k) > maior){
      maior = a1[i] * (a2[i] + k);
    }
    
  }
  
  return maior;
}

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> vt(n);
    vector<int> vl(n);

    for (int i = 0; i < n; i++) {
        cin >> vt[i];
        cin >> vl[i];
    }
  
    for(int i = 1; i <= d; i++){
      cout << maior(vt,vl,i,n) << endl;
    }
    
    return 0;
}
