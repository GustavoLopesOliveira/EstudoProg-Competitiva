#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector<int> v(n);

        int mihai = 0, bianca = 0;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] % 2 == 0){
                mihai += v[i];
            }else{
                bianca += v[i];
            }
        }

        if(mihai > bianca){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }


    }
}