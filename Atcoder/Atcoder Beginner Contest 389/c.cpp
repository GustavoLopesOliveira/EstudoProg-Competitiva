#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
typedef long long ll;

int main(){
    int q; cin >> q;

    queue<pair<ll,ll>> snakes;
    ll global = 0;

    while(q--){
        int tipo; cin >> tipo;

        if(tipo == 1){
            ll l; cin >> l;
            if(snakes.empty()){
                snakes.push({0,l});
            }else{
                snakes.push({snakes.back().f + snakes.back().s,l});
            }
        }else if(tipo == 3){
            int k; cin >> k;
            queue<pair<ll,ll>> copia = snakes;

            for(ll i = 1; i < k; i++){
                copia.pop();
            }
            cout << copia.front().f  - global << endl;
        }else{
            int m = snakes.front().s;
            snakes.pop();
            global += m;
        }
    }
}