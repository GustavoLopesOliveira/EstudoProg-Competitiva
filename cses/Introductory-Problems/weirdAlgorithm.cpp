#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n; cin >> n;
    
    cout << n << " ";
    
    while(n != 1){
        if(n % 2 == 1){
            n *= 3;
            n++;
            cout << n << " ";
        }else{
            n /= 2;
            cout << n << " ";
        }
    }

    cout << endl;
}