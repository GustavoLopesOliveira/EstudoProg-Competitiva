#include <bits/stdc++.h>
using namespace std;

int main(){
    int k; cin >> k;
    string s,t;

    cin >> s;
    cin >> t;

    int cont = 0;

    if(s.size() == t.size()){
        for(int i = 0; i < s.size(); i++){
            if(s[i] != t[i]){
                cont++;
            }
        }
    }else{
        if(s.size() > t.size()){
            for(int i = 0; i < t.size(); i++){
                if(s[i] != t[i]){
                    cont++;
                }
            }
            cont++;
        }else{
            for(int i = 0; i < s.size(); i++){
                if(s[i] != t[i]){
                    cont++;
                }
            }
            cont++;
        }
    }

    if(cont == k){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}