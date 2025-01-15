#include <bits/stdc++.h>

using namespace std; 

typedef long long ll;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        ll mult = 1;

        auto menor = min_element(v.begin(),v.end());

        for(int i = 0; i < n; i++){
            if( &v[i] != &(*menor)){
                mult *= v[i];
            }
        }

        mult *= (*menor + 1);

        cout << mult << endl;

    }   
}