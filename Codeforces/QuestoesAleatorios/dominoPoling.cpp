#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;

    int  lateral = n / 2;
    int  base = m ;

    int maxDominos = lateral * base;

    cout << maxDominos << endl;

}