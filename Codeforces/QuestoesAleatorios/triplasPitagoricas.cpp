#include <iostream>
using namespace std;

int main(){
    long long m,n;
    cin >> m >> n;

    long long a,b,c;

    a = m * m +(-1 * (n * n));
    b = 2 * m * n;
    c = m * m + n * n;

    cout << a << ' ' << b << ' ' << c << endl;
}