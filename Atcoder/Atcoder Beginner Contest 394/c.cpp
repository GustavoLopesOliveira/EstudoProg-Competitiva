#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define f first
#define s second


int main(){
    string str; cin >> str;
    
    int tam = str.size();

    for(int i = tam - 1; i >= 1; i--){
        if(str[i] == 'A' && str[i+1] == 'W'){
            str[i+1] = 'A';
            str[i] = 'C';
        }
    }

    cout << str << endl;
}