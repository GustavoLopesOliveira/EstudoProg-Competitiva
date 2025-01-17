#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector<pair<int,int>> v(n);

        for(int i = 0; i < n; i++){
            int a,b;
            cin >> a >> b;
            
            v[i] = make_pair(a,b);
        }

        int posicao = 0,valor = -1;

        for(int i = 0; i < n; i++){
            if(v[i].f <= 10){
                if(i == 0 || v[i].s > valor){
                    valor = v[i].s;
                    posicao = i + 1;
                }
            }
        }

        cout << posicao << endl;
        
    }
}