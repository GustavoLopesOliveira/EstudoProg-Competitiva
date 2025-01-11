#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n; cin >> n;

    if(n >= 0){
        cout << n << endl;
    }else{
        if( n / 10 >= 10*(n/100 + n%10)){
            cout << n / 10 << endl;
        }else{
            cout << 10*(n/100 + n%10) << endl;
       }
    }
}
