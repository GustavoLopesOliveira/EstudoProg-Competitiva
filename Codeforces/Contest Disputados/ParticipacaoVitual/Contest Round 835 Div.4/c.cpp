#include <bits/stdc++.h>

using namespace std;
//Teste
bool eTudoIgual(vector<int> & v){
  for(int i = 0; i < v.size(); i++){
    if(v[0] != v[i]){
      return false;
    }
  }
  
  return true;
}

int maiorQ(vector<int> & v, int n,int pos){
    int maior = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] > maior &&  i != pos){
            maior = v[i];
        }
    }

    return maior;
}

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++) cin >> v[i];


        for(int i = 0; i < n; i++){
          if(eTudoIgual(v)){
            cout << 0 << " ";
          }else{
            cout << v[i] - maiorQ(v,v[i],i) << " ";
          }
        }

        cout << endl;
    }
}