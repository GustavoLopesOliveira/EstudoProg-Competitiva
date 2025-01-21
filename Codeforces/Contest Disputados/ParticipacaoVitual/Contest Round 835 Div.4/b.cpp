#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        string str; cin >> str;

        int maior = 0;
        char maiorC = 'A';

        for(int i = 0; i < n; i++){
            if(str[i] > maiorC){
                maiorC = str[i];
                maior = str[i] - 'a' + 1;
            }
        }

        cout << maior << endl;
    }
}