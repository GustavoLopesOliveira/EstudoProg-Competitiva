#include <bits/stdc++.h>
using namespace std;
    
bool temIguais(string str){
    for(int i = 0; i < str.size() - 1; i++){
        if(str[i] == str[i+1]) return true;
    }

    return false;
}

int main(){

    int t; cin >> t;

    while(t--){
        string str; cin >> str;
        
        if(!temIguais(str)){
            cout << str.size(); << endl;
        }else{
            int cont = 0;

            for(int i = 0; i < str.size() - 1; i++){

            }
        }
    }
}
