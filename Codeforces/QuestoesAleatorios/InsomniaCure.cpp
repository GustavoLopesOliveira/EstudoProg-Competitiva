#include <iostream>
using namespace std;

int main() {
    long long k, l, m, n, d;
    cin >> k;
    cin >> l; 
    cin >> m; 
    cin >> n; 
    cin >> d;

    long long dragonsDamaged = 0;

    for (int i = 1; i <= d; ++i) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            dragonsDamaged++;
        }
    }

    cout << dragonsDamaged << endl;
    return 0;
}
