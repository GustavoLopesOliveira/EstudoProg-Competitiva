#include <bits/stdc++.h>
using namespace std;

int modulo(int n){
    if(n < 0){
        return -n;
    }else{
        return n;
    }
}

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int a[n],b[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        int max = 0;
        bool aTreinou = false;

        for(int i = 0 ; i < n; i++){
            max += MAX(a[i]- b[i]);
            /*if(!aTreinou){
                max += a[i];
                aTreinou = true;
            }else{
                max += b[i];
                aTreinou = false;
            }*/
        }

        cout << max(a[i] - b[i]) << endl;
    }
}