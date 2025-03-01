#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    unordered_map<int, int> lpos;
    int menor = INT_MAX;

    for (int j = 0; j < n; j++) {
        if (lpos.count(v[j])) {
            menor = min(menor, j - lpos[v[j]] + 1);
        }
        lpos[v[j]] = j;
    }

    cout << (menor == INT_MAX ? -1 : menor) << endl;
    return 0;
}
