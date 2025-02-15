#include <bits/stdc++.h>

#define f first
#define s second

typedef long long ll;

using namespace std;

int main(){
    string str; cin >> str;

    int cont = 0,tam = str.size();
    int meio = (tam -1)/2;

    for(int i = 0; i < tam -2; i++){
        for(int j = i + 1; j < tam - 1; j++){
            for(int k = j + 1; k < tam ; k++){
                if(j - i == k - j){
                    if(str[i] == 'A' && str[j] == 'B' && str[k] == 'C'){
                        cont++;
                    }
                }
            }  
        }
    }

    cout << cont << endl;
}
