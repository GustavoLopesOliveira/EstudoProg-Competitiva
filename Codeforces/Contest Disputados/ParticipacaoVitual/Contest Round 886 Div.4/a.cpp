#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int a,b,c;

        cin >> a >> b >> c;

        bool ac = false;

        if( a + b >= 10){
            ac = true;
        }else if(a + c >= 10){
            ac = true;
        }else if(b + c >= 10){
            ac = true;
        }

        if(ac){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}