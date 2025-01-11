#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


ll passos(ll n){
    ll pa = 0;
    while(n != 1){
      
        if(n % 3 != 0){
          return -1;
        }
        
        if(n % 6 == 0){
            n = n/6;
            pa++;
        }else{
            n *= 2;
            pa++;
        }
    }

    return pa;
}

int main(){
    int tt; cin >> tt;

    while(tt--){
        ll n; cin >> n;
        cout << passos(n) << endl;

    }
}