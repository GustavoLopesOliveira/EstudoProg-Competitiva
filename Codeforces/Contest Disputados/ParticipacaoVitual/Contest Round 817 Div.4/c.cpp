#include <bits/stdc++.h>

using namespace std;

int main(){
    int tt; cin >> tt;

    while(tt--){
        int n; cin >> n;

        string m[3][n];

        multiset <string> s;
        
        int cont1 = 0, cont2 = 0, cont3 = 0;

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                cin >> m[i][j];
                s.insert(m[i][j]);
            }
        }

        

        for(int i = 0; i < n; i++){
            if(s.count(m[0][i]) == 1){
                cont1 += 3;
            }else if(s.count(m[0][i]) == 2){
                cont1++;
            }
        }

        for(int i = 0; i < n; i++){
            if(s.count(m[1][i]) == 1){
                cont2 += 3;
            }else if(s.count(m[1][i]) == 2){
                cont2++;
            }
        }

        for(int i = 0; i < n; i++){
            if(s.count(m[2][i]) == 1){
                cont3 += 3;
            }else if(s.count(m[2][i]) == 2){
                cont3++;
            }
        }

        cout << cont1 << " " << cont2 << " " << cont3 << endl;
    }
}