#include <bits/stdc++.h>
using namespace std;

bool tem(vector<int> & v ,int a ,int tam){
    for(int i = 0; i < tam; i++){
        if(v[i] == a) return true;
    }

    return false;
}

int main(){
	int n,m; cin >> n >> m;

    vector<int> a(m);

    for(int i = 0; i < m; i++) cin >> a[i];

    int cont = 0;

    for(int i = 1; i <= n;i++){
        if(!tem(a,i,m)){
            cont++;
        }
    }

    cout << cont << endl;

    for(int i = 1; i <= n; i++){
        if(!tem(a,i,m)){
            cout << i << " ";
        }
    }

    cout << endl;
    
}
