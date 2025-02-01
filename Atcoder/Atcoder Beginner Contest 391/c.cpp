#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q; cin >> n >> q;

    vector<int> ninhos(n,1);

    while(q--){
        int query; cin >> query;
        
        if(query == 1){
            int p,h; cin >> p >> h;
            ninhos[p-1]--;
            ninhos[h-1]++;

        }else{
            int cont = 0;
            for(int i  = 0; i < n; i++){
                if(ninhos[i] > 1) cont++;
            }
            cout << cont << endl;
        }
    }
}