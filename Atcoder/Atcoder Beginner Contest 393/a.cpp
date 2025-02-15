#include <bits/stdc++.h>

#define f first
#define s second

typedef long long ll;

using namespace std;

int main(){
    string a,b; cin >> a >> b;
    int saida;

    if(a == "sick" && b == "sick"){
        saida = 1;
    }else if(a == "sick" && b == "fine"){
        saida = 2;
    }else if(a == "fine" && b == "sick"){
        saida = 3;
    }else{
        saida = 4;
    }

    cout << saida << endl;
}
