#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int saida = 0;

        auto menor = min_element(v.begin(),v.end());

        for(int i = 0; i < n; i++){
            if(v[i] != *menor){
                saida += v[i] - *menor;
            }
        }

        cout << saida << endl;
    }
}