#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector<int> v(n);
    
    int soma = 0;

    for(int i = 0; i < n; i++){ 
        cin >> v[i]; 
        soma += v[i];
    }
    
    int rest;
    
    if(soma % 2 == 0) rest =  soma/2 - 1;

    if(soma % 2 == 1) rest = soma/2;

    cout << rest << endl;


}
