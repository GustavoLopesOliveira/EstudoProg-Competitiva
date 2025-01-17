#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int t; cin >> t;

    while(t--){
        ll n,k; cin >> n >> k;

        vector<int> v(n);
        
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        int saida = 0;

        for(int i = 1; i < n; i++){
            if(abs(v[i] - v[i - 1]) > k){
                saida++;
            }
        }

        cout << saida + 1<< endl;
    }
}