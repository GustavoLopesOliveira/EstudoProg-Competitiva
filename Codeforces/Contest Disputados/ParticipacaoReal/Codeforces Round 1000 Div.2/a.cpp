#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mdc(ll l,ll r){
    if(r == 0) return l;
    return mdc(l,r % l);
}

int main(){
    int t; cin >> t;

    while(t--){
        ll l,r; cin >> l >> r;

        ll cont = 0;

        for(ll i = l; i <= r; i++){
            for(ll j = l; j <= r; j++){
                if(mdc(i,j) == 1) cont++;
            }
        }

        cout << cont << endl;
    }
}