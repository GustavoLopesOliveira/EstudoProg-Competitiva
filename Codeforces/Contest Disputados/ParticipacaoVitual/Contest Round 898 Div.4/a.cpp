#include <bits/stdc++.h>

using namespace std; 

int main(){
    int t; cin >> t;

    while(t--){
        string str; cin >> str;

        bool condicao;

        if(str == "abc" || str == "acb" || str == "bac" ||
        str == "cba"){
            condicao = true;
        }else{
            condicao = false;
        }


        if(condicao){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}