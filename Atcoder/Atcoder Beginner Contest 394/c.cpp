#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define f first
#define s second

bool temWA(string str){
    for(int i = 0; i < str.length() - 1; i++){
        if(str[i] == 'W' && str[i+1] == 'A') return true;
    }

    return false;
}


int main(){
    string str; cin >> str;
    
    while(temWA(str)){
        for(int i = 0; i < str.length() - 1; i++){
        if(str[i] == 'W' && str[i+1] == 'A'){
            str[i] = 'A';
            str[i+1] = 'C';
        }
    }
    }

    cout << str << endl;
}