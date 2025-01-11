#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector <int> vet(n);

    for(int i = 0; i < n; i++) cin >> vet[i];

    int a1 = 0, a2 = 0, a3 = 0;

    for(int i = 0; i < n; i++){
        if(vet[i] == 1){
            a1++;
        }else if(vet[i] == 2){
            a2++;
        }else{
            a3++;
        }
    }
  
    int max;
    
    if(a1 > a2 && a1 > a3){
      max = a1;
    }else if(a2 > a1 && a2 > a3){
      max = a2;
    }else{
      max = a3;
    }
    cout << max << endl;

}