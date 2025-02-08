#include <bits/stdc++.h>
using namespace std;

int busca(vector<int> &a , int b, int tam){
  for(int i = 0; i < tam; i++){
    if(a[i] == b) return i;
  }
  
}

int main(){
	int n; cin >> n;

    vector<int> p(n);
    vector<int> q(n);

    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = 0; i < n; i++) cin >> q[i];
    
    // botao pessoa
    map<int,int> mp1;
    
    
    for(int i = 0; i < n; i++){
      mp1.insert(make_pair(q[i],p[i]));
      
    }

    for(int i = 1; i <= n; i++){
        int numero = q[mp1[i]-1];
        cout << numero  << " ";
    }

    cout << endl;
}
