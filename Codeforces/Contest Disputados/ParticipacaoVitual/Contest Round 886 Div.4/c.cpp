#include <bits/stdc++.h>

using namespace std;

#define MAX 8

int main(){
    int t; cin >> t;

    while(t--){
        char mat[MAX][MAX];

        vector<char> v;

        for(int i = 0; i < MAX; i++){
            for(int j = 0; j < MAX; j++){
                cin >> mat[i][j];
                if(mat[i][j] != '.'){
                    v.push_back(mat[i][j]);
                }
            }
        }

        for(char a : v){
            cout << a ;
        }

        cout << endl;
    }
}