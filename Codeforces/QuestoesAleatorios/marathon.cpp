#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int a,b,c,d,cont = 0;

        cin >> a >> b >> c >> d;

        if(d > a){
            cont++;
        }

        if(c > a){
            cont++;
        }

        if(b > a){
            cont++;
        }

        cout << cont << endl;


    }
}